bin_SCRIPTS = parse-java jtree2text
CLEANFILES  = $(bin_SCRIPTS)
EXTRA_DIST  = parse-java.sh.src jtree2text.sh.src

% : %.sh.src Makefile
	sed 's@__PREFIX__@$(prefix)@g;\
	     s@__SGLR__@$(SGLR)@g; \
	     s@__ASFIXTOOLS__@$(ASFIXTOOLS)@g; \
	     s@__STRATEGO__@$(STRATEGO)@g;' \
	        < $< > $@ && \
	     chmod +x $@

