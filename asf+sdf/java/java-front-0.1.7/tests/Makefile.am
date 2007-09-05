SUBDIRS=CompilationUnits comments generic

SCFLAGS	= --main $@

CLEANFILES = parse-unit parse-unit.config $(wildcard *.c) $(wildcard *.dep) $(wildcard *.mtree) $(wildcard *.tmp)  $(wildcard *.results)
EXTRA_DIST = $(wildcard *.r) $(wildcard *.testsuite) $(wildcard *.src)

parse-unit.config: parse-unit.config.src Makefile
	sed 's#__SGLR__#$(SGLR)#g; \
	     s#__ASFIXTOOLS__#$(ASFIXTOOLS)#g;' \
	  < $< > $@

parse-unit: parse-unit.r
	$(STRATEGO)/bin/sc $(SCFLAGS) -i $< -o $@

check: parse-unit parse-unit.config
	for file in $(wildcard *.testsuite) ; do \
    ./parse-unit -i $$file -o $$file.results; \
	done ;

	

