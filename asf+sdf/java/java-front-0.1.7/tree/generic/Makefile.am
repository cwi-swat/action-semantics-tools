LANGUAGE=Generic-Java
PPSTRATEGO=./stratego.pp

EXTRA_DIST=$(PPSTRATEGO)

pkgdata_DATA=$(LANGUAGE).r

CLEANFILES=$(pkgdata_DATA) $(LANGUAGE).rdef $(LANGUAGE).astratego stratego.pp.af $(wildcard *.mtree)

$(LANGUAGE).astratego: ${top_builddir}/grammar/generic/$(LANGUAGE).def
	$(GB)/bin/parse -l sdf -v 2.1 -I -i $< | $(STRATEGOTOOLS)/bin/sdf2sig -o $@

$(LANGUAGE).rdef: $(LANGUAGE).astratego
	$(GPP)/bin/ast2abox -p $(PPSTRATEGO) -i $< | $(GPP)/bin/abox2text -o $@

$(LANGUAGE).r: $(LANGUAGE).rdef
	$(SDFTOOLS)/bin/unpack $< r

