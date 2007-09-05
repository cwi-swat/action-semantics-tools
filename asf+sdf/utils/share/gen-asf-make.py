
# TODO:
# - let abbrevs also be active for sdf to latex
# - generate pp-scripts.
# - generate seperate pp-tables for term pretty printing and asf.
# - make sdf2 prettyprinttable cope with renamings.


import sys, os.path, os, string, time
from aterm import *

PREFIX = "."
XTPREFIX = "/usr/local/xt"

class Graph:
    def __init__(self):
        self.set = []
    def add(self, n1, n2):
        if not self.has_edge(n1,n2):
            self.set.append((n1,n2))
    def remove(self, n1, n2):
        self.set.remove((n1,n2))
    def has_edge(self, n1, n2):
        for (m1, m2) in self.set:
            if m1 == n1 and m2 == n2:
                return 1
        return 0
    def has_source(self,n1):
        for (m1,m2) in self.set:
            if m1 == n1:
                return 1
        return 0
    def get_targets(self,n1):
        list = []
        for (m1,m2) in self.set:
            if m1 == n1:
                list.append(m2)
        return list
    def get_all_targets(self,n1):
        list = []
        for (m1,m2) in self.set:
            if not m2 in list:
                list.append(m1)
        return list
    def get_all_sources(self):
        list = []
        for (m1,m2) in self.set:
            if not m1 in list:
                list.append(m1)
        return list
    def get_all_nodes(self):
        list = []
        for (m1,m2) in self.set:
            if not m1 in list:
                list.append(m1)
            if not m2 in list:
                list.append(m2)
        return list

    def _trans(self,source,targets):
        if targets == []:
            return
        for t in targets:
            self.add(source, t);
        for t in targets:
            self._trans(source,self.get_targets(t))
    def transitive(self,source):
        for s in self.get_all_sources():
            self._trans(s, self.get_targets(s))

    def reflexive(self):
        for s in self.get_all_nodes():
            self.add(s,s)
    def p(self):
        print self.set


class ASFSDFModule:
    xtbin = XTPREFIX + "/bin"
    def __init__(self,name):
        self.name = name;

    # Static function
    def get_asf_dependencies(self,targets):
        l = []
        for m in targets:
            if os.path.isfile("%s.asf" % m):
                l.append(m)
        return l
    
    def get_import_graph(self):
        f = os.popen("%s/sdf-imports -i %s" % (ASFSDFModule.xtbin, self.name))
        line = f.readline()
        f.close()
        line = string.rstrip(line);
        line = string.replace(line, '[', '')
        line = string.replace(line, ']', '')
        mods = string.split(line, ',')
        for i in range(len(mods)):
            mods[i] = string.replace(mods[i], '"', '')
        for m in mods:
            os.system("parse-sdf2 -i %s.sdf -o %s.sdf.baf" % (m,m))
        f = os.popen("imports -g -l -r ./meta.conf %s.sdf.baf" %
                     (self.name))
        line = f.readline()
        f.close()
        term = str2aterm(line)
        nodes = term.args[0].args[0].elts
        edges = term.args[1].args[0].elts
        g = Graph()
        for e in edges:
            s = string.replace(e.elts[0].args[0].name, '.sdf.baf', '')
            s = string.replace(s, './', '')
            t = string.replace(e.elts[1].args[0].name, '.sdf.baf', '')
            t = string.replace(t, './', '')
            g.add(s,t)
        g.transitive(name)
        g.reflexive()
        self.import_graph = g
        return g
    
    
class Makefile:
    header = PREFIX + '/share/gen-asf-header.makefile'
    footer = PREFIX + '/share/gen-asf-footer.makefile'
    def __init__(self,module):
        self.module = module

    def generate(self):
        self.print_header()
        self.print_all_rule()
        graph = self.module.get_import_graph()
        sources = graph.get_all_sources()
        for s in sources:
            targets = graph.get_targets(s)
            self.print_make_rules(s,targets)
        self.print_clean_rules(sources)
        self.print_parsetable_rule(sources)
        self.print_ppdump_rule(sources)
        self.print_pptable_rule(sources)
        self.print_footer()


    def print_header(self):
        t = time.asctime(time.gmtime(time.time()));
        print "# Makefile generated for module %s on %s (GMT)" % (self.module.name,t)
        print "# (c) Tijs van der Storm 2002\n"
        print "include %s\n" % (Makefile.header)

    def print_footer(self):
        print "include %s\n" % (Makefile.footer)

    def print_make_rules(self,s,targets):
        self.print_def_rule(s,targets)
        self.print_asf_rules(s,targets)

    def print_def_rule(self,s,targets):
        print "# Rule to get a definition (text)file for %s.\n" % (s)
        print "%s.def:" % s,
        for t in targets:
            print "%s.sdf" % t,
        print "\n\t$(PACK) -i %s | $(ASOURCE) | $(SDF2TEXT) -o $@\n\n" % (s)

    def print_asf_rules(self,s,targets):
        asfdeps = self.module.get_asf_dependencies(targets)
        if asfdeps != []:
            self.print_eqs_rule(s,targets,asfdeps)
            self.print_ref_latex_rule(s,targets,asfdeps);
            self.print_mod_latex_rule(s,targets,asfdeps);
            self.print_asf_latex_rule(s,targets,asfdeps);
            self.print_asf_abbrevs_rule(s,targets,asfdeps);
            self.print_asf_text_rule(s,targets,asfdeps);
            self.print_asf_html_rule(s,targets,asfdeps);
            self.print_pp_latex_sh_rule(s,targets,asfdeps);

    def print_eqs_rule(self,s,targets,asfdeps):
        print "%s.eqs:" % s,
        for t in asfdeps:
            print "%s.asf.baf" % t,
        print "\n\t$(CONCATASF) \\"
        for t in asfdeps:
            if os.path.isfile("%s.asf" % t):
                print "\t\t%s.asf.baf \\" % t
        print "\t\t-o $@\n"

    def print_ref_latex_rule(self,s,targets,asfdeps):
        print "# Rules to prettyprint reference of %s.\n" % (s)
        print "%s.ref.latex:" % (s),
        for t in targets:
            print "%s.sdf.latex" % (t),
        for t in asfdeps:
            print "%s.asf.latex" % (t),
        print "\n\t\techo '%% reference for %s' > $@" % (s)
        for t in targets:
            print "\t\techo '\\section{Module: %s}' >> $@" % (t)
            print "\t\tcat %s.sdf.latex >> $@" % (t)
            if t in asfdeps:
                print "\t\tcat %s.asf.latex >> $@" % (t)
        print

    def print_mod_latex_rule(self,s,targets,asfdeps):
        print "%s.mod.latex: %s.sdf.latex" % (s,s),
        if s in asfdeps:
            print "%s.asf.latex" % (s),
        print "\n\t\techo '\\input{%s.sdf.latex}' > $@" % (s)
        if s in asfdeps:
            print "\t\techo '\\input{%s.asf.latex}' >> $@" % (s)
        print

    def print_asf_latex_rule(self,s,targets,asfdeps):
        print "# Rules to prettyprint equations of %s.\n" % (s)
        print "%s.asf.latex: %s.asf.pp.tbl %s.asf %s.asf.abbrevs $(ASFPP)" % (s,s,s,s),
        for t in targets: # note: we need all .pp tables (not just for asfs)
            print "%s.pp" % (t),
        print "\n\t$(PARSER) -2 -p $< -i %s.asf | $(FLATTEN) | $(IMPLODEPT) | $(AST2ABOX) \\" % (s)
        print "\t\t-p $(ASFPP) \\"
        for t in targets:
            print "\t\t-p %s.pp \\" % (t)
        print "\t\t| $(ABOX2LATEX) -o $@ -t %s.asf.abbrevs\n" % (s)

    def print_pp_latex_sh_rule(self,s,targets,asfdeps):
        print "%s.pp.latex.sh: %s.pp %s.asf.pp.tbl %s.asf.abbrevs $(ASFPP)" % (s,s,s,s),
        for t in targets: # note: we need all .pp tables (not just for asfs)
            print "%s.pp" % (t),
        print "\n\t\techo '#!/bin/sh' > $@"
        print "\t\techo -n '$(PARSER) -2 -p %s.asf.pp.tbl -i $$1 | $(FLATTEN) | $(IMPLODEPT) | ' >> $@" % (s)
        print "\t\techo '$(AST2ABOX) -p $(ASFPP)  \\' >> $@"
        for t in targets:
            print "\t\techo '-p %s.pp \\' >> $@" % (t)
        print "\t\techo '| $(ABOX2LATEX) -t %s.asf.abbrevs -o $$2' >> $@" % (s)
        print "\t\tchmod a+x $@\n"

    def print_asf_abbrevs_rule(self,s,targets,asfdeps):
        print "%s.asf.abbrevs: $(ASFABBREVS)" % (s),
        for t in targets: 
            print "%s.sdf.abbrevs" % (t),
        print "\n\t$(COMPABB) \\"
        for t in targets: 
            print "\t\t%s.sdf.abbrevs \\" % (t)
        print "\t\t$(ASFABBREVS) > $@\n"

    def print_asf_text_rule(self,s,targets,asfdeps):
        print "%s.asf.text: %s.asf.pp.tbl %s.asf $(ASFPP)" % (s,s,s),
        for t in targets:
            print "%s.pp" % (t),
        print "\n\t$(PARSER) -2 -p $< -i %s.asf | $(FLATTEN) | $(IMPLODEPT) | $(AST2ABOX) \\" % (s)
        print "\t\t-p $(ASFPP) \\"
        for t in targets:
            print "\t\t-p %s.pp \\" % (t)
        print "\t\t| $(ABOX2TEXT) -o $@\n"

    def print_asf_html_rule(self,s,targets,asfdeps):
        print "%s.asf.html: %s.asf.pp.tbl %s.asf $(ASFPP)" % (s,s,s),
        for t in targets:
            print "%s.pp" % (t),
        print "\n\t$(PARSER) -2 -p $< -i %s.asf | $(FLATTEN) | $(IMPLODEPT) | $(AST2ABOX) \\" % (s)
        print "\t\t-p $(ASFPP) \\"
        for t in targets:
            print "\t\t-p %s.pp \\" % (t)
        print "\t\t| $(ABOX2HTML) -o $@\n"

    def print_all_rule(self):
        s = self.module.name
        print "all: %s.eqs parsetables" % (s)
        print
    
    def print_clean_rules(self,sources):
        print "clean:"
        for s in sources:
            print "\t\trm -f %s.trm.tbl" % (s)
            print "\t\trm -f %s.asf.tbl" % (s)
            print "\t\trm -f %s.asf.pp.tbl" % (s)
            print "\t\trm -f %s.def" % (s)
            print "\t\trm -f %s.def.cons" % (s)
            print "\t\trm -f %s.sdf.cons" % (s)
            print "\t\trm -f %s.sdf.baf" % (s)
            print "\t\trm -f %s.asf.baf" % (s)
            print "\t\trm -f %s.eqs" % (s)
            print "\t\trm -f %s.c" % (s)
            print "\t\trm -f %s.exe" % (s)
            print "\t\trm -f %s.asf.latex" % (s)
            print "\t\trm -f %s.sdf.latex" % (s)
            print "\t\trm -f %s.asf.tex" % (s)
            print "\t\trm -f %s.sdf.tex" % (s)
            print "\t\trm -f %s.asf.ps" % (s)
            print "\t\trm -f %s.sdf.ps" % (s)
        print '\t\t@echo "All definitions, parse tables and asfix deleted."'
        print '\t\t@echo "To delete pp-tables as well do make ppclean."\n'
        print "ppclean:"
        for s in sources:
            print "\t\trm -f %s.ppa" % (s)
            print "\t\trm -f %s.pp.af" % (s)
        print '\t\t@echo "All processed pretty-print tables deleted."\n'

    def print_parsetable_rule(self,sources):
        print "parsetables:",
        for s in sources:
            print "%s.trm.tbl %s.asf.tbl" % (s,s),
        print "\n"

    def print_pptable_rule(self,sources):
        print "pptables:",
        for s in sources:
            print "%s.pp" % (s),
        print "\n"

    def print_ppdump_rule(self,sources):
        name = self.module.name
        name = os.path.basename(name)
        print "ppdump:",
        for s in sources:
            print "%s.pp" % (s),
        for s in sources:
            print "%s.sdf.abbrevs" % (s),
        print "\n\t\tmkdir -p %s.pptables" % (name)
        for s in sources:
            dir = os.path.dirname(s)
            print "\t\tmkdir -p %s.pptables/%s" % (name,dir)
            print "\t\tcp %s.pp %s.pptables/%s" % (s,name,dir)
            print "\t\tcp %s.sdf.abbrevs %s.pptables/%s" % (s,name,dir)
        print
        


if __name__ == '__main__':
    try:
        name = string.replace(sys.argv[1],"./",'')
        module = ASFSDFModule(name)
        makefile = Makefile(module)
        makefile.generate()
    except IndexError:
        print \
"""Usage: gen-asf-make <module> (without \".sdf\").
A Makefile is produced on standard output

This tool needs %s and %s.""" % (Makefile.header,Makefile.footer)

    

