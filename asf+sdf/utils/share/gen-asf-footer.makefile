##################### Generic rules ###################

%.trm.tbl: %.def
	$(PARSESDF) -i $< | $(RMVARS) -m $* | $(PGEN) -m $* -o $@

%.asf.tbl: %.def
	$(PARSESDF) -i $< | $(ADDEQSORG) -m $* | $(PGEN) -m $* -o $@

%.asf.pp.tbl: %.def
	$(PARSESDF) -i $< | $(ADDEQSNEW) -m $* | $(XTPGEN) -m $* -o $@

%.sdf.baf: %.sdf
	$(PARSESDF) -i $< -o $@

%.asf.baf: %.asf.tbl %.asf
	$(PARSER) -p $< -i $*.asf -o $@

%.pp: %.sdf
	if [ -e $@ ] ; then \
		$(PARSER) -2 -p $(SDFCONSTBL) -i $< | $(FLATTEN) | $(IMPLODEPT) | $(PPGEN) -a -o $@.new ; \
	else \
		$(PARSER) -2 -p $(SDFCONSTBL) -i $< | $(FLATTEN) | $(IMPLODEPT) | $(PPGEN) -a -o $@ ; \
	fi 

%.sdf.abbrevs:
	if [ ! -e $@ ] ; then echo '[]' > $@ ; fi 


%.sdf.latex: %.sdf %.sdf.abbrevs $(SDFEXTRAPP)
	$(PARSER) -2 -p $(SDFCONSTBL) -i $< | $(FLATTEN) | $(IMPLODEPT) | $(AST2ABOX) \
		-p $(SDFCONSPP) -p $(SDFEXTRAPP) | $(ABOX2LATEX) -o $@ -t $*.sdf.abbrevs


#%.sdf.latex: %.sdf
#	$(PP) -l $(SDF) -v $(SDFVERSION) -O latex -i $< -o $@

%.sdf.text: %.sdf
	$(PP) -l $(SDF) -v $(SDFVERSION) -O text -i $< -o $@

%.sdf.html: %.sdf
	$(PP) -l $(SDF) -v $(SDFVERSION) -O html -i $< -o $@


%.tex: %.latex
	echo '\documentclass[a4paper]{article}' > $@
	echo '\usepackage{amssymb,$(BOXENV)}' >> $@
	echo '\begin{document}\input{$<}\end{document}' >> $@

%.pdf: %.tex
	$(PDFLATEX) $<
	mv $(*F).pdf $(@D)
	mv $(*F).log $(@D)
	mv $(*F).aux $(@D)

%.dvi: %.tex
	$(LATEX) $<
	mv $(*F).dvi $(@D)
	mv $(*F).log $(@D)
	mv $(*F).aux $(@D)

#%.dvi: %.tex
#	$(LATEX) $<

%.ps: %.dvi
	$(DVIPS) $< -o $@

#%.ps: %.pdf
#	#pdf2dsc `basename $<` $@
#	pdftops -level1 `basename $<` $@


%.sdf.cons: %.sdf
	$(PARSER) -p $(SDFCONSTBL) -i $< | $(IMPLODEPT) | $(SDFCONS) | $(SDF2TEXT) -a -o $@

%.def.cons: %.def
	$(PARSER) -p $(SDFCONSTBL) -i $< | $(IMPLODEPT) | $(SDFCONS) | $(SDF2TEXT) -a -o $@

%.sh: %.eqs
	echo '#!/bin/sh' > $@
	echo '$(PARSER) -p $*.trm.tbl | $(ASFE) -e $< | $(ASOURCE)' >> $@
	chmod a+x $@


%.exe: %.eqs
	$(ASFC) -c -i $< -n $* -o $*.c
	mv -f $* $@

%.def.latex: %.def %.sdf.abbrevs $(SDFEXTRAPP)
	$(PARSER) -2 -p $(SDFCONSTBL) -i $< | $(FLATTEN) | $(IMPLODEPT) | $(AST2ABOX) \
		-p $(SDFCONSPP) -p $(SDFEXTRAPP) | $(ABOX2LATEX) -o $@ -t $*.sdf.abbrevs

#%.def.latex: %.def
#	$(PP) -l $(SDF) -v $(SDFVERSION) -O latex -i $< -o $@ 

%.def.text: %.def
	$(PP) -l $(SDF) -v $(SDFVERSION) -O text -i $< -o $@ 

%.def.html: %.def
	$(PP) -l $(SDF) -v $(SDFVERSION) -O html -i $< -o $@ 
