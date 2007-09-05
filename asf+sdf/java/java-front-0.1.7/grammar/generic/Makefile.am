LANGUAGE=Generic-Java

pkgdata_DATA = $(LANGUAGE).tbl $(LANGUAGE).def Stratego-$(LANGUAGE).tbl
CLEANFILES = $(pkgdata_DATA)
EXTRA_DIST = $(wildcard *.sdf)

IBASIC=-I ${top_builddir}/grammar/basic

$(LANGUAGE).def: $(wildcard *.sdf) ${top_builddir}/grammar/basic/*.sdf
	$(SDFTOOLS)/bin/pack-sdf $(IBASIC) -i $(LANGUAGE) | \
	$(ASFIXTOOLS)/bin/asfix-yield -o $(LANGUAGE).def

$(LANGUAGE).tbl: $(LANGUAGE).def
	$(PGEN)/bin/sdf2table -m $(LANGUAGE) -i $(LANGUAGE).def -o $@

Stratego-$(LANGUAGE).tbl: $(wildcard *.sdf)
	$(SDFTOOLS)/bin/pack-sdf $(IBASIC) -I $(STRATEGO)/share/stratego-front -i Stratego-$(LANGUAGE) | \
	$(ASFIXTOOLS)/bin/asfix-yield | $(PGEN)/bin/sdf2table -m Stratego-$(LANGUAGE) -o $@

