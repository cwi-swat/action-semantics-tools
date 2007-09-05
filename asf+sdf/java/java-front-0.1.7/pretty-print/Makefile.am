bin_SCRIPTS = jtree2abox
CLEANFILES  = $(bin_SCRIPTS) $(wildcard *.c) $(wildcard *.dep) $(wildcard *.mtree)  $(wildcard *.atree) 
EXTRA_DIST  = $(wildcard *.syn) $(wildcard *.cr) $(wildcard *.sdf)

SCINCLUDES=-I ${top_builddir}/tree/concrete -I ${top_builddir}/tree/generic

jtree2abox: $(wildcard *.cr) Stratego-box.tbl
	$(STRATEGO)/bin/sc $(SCINCLUDES) --main pp-Java -i pp-Java.r -o jtree2abox

Stratego-box.tbl: $(wildcard *.sdf)
	$(SDFTOOLS)/bin/pack-sdf -i Stratego-box -I ${top_builddir}/lib/box  -I $(STRATEGO)/share/stratego-front | \
	$(ASFIXTOOLS)/bin/asfix-yield | $(PGEN)/bin/sdf2table -m Stratego-box -o $@

