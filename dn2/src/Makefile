# Makefile.in generated by automake 1.6.3 from Makefile.am.
# src/Makefile.  Generated from Makefile.in by configure.

# Copyright 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002
# Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.


SHELL = /bin/sh

srcdir = .
top_srcdir = ..

prefix = /usr/local
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${prefix}/info
mandir = ${prefix}/man
includedir = ${prefix}/include
oldincludedir = /usr/include
pkgdatadir = $(datadir)/dn
pkglibdir = $(libdir)/dn
pkgincludedir = $(includedir)/dn
top_builddir = ..

ACLOCAL = ${SHELL} /home/tvdstorm/Projecten/Inf/Afstuderen/Final/dn2/missing --run aclocal-1.6
AUTOCONF = ${SHELL} /home/tvdstorm/Projecten/Inf/Afstuderen/Final/dn2/missing --run autoconf
AUTOMAKE = ${SHELL} /home/tvdstorm/Projecten/Inf/Afstuderen/Final/dn2/missing --run automake-1.6
AUTOHEADER = ${SHELL} /home/tvdstorm/Projecten/Inf/Afstuderen/Final/dn2/missing --run autoheader

am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_SCRIPT = ${INSTALL}
INSTALL_HEADER = $(INSTALL_DATA)
transform = s,x,x,
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :

EXEEXT = 
OBJEXT = o
PATH_SEPARATOR = :
AMTAR = ${SHELL} /home/tvdstorm/Projecten/Inf/Afstuderen/Final/dn2/missing --run tar
AWK = gawk
CC = gcc
DEPDIR = .deps
INSTALL_STRIP_PROGRAM = ${SHELL} $(install_sh) -c -s
PACKAGE = dn
RANLIB = ranlib
STRIP = 
VERSION = 0.1
am__include = include
am__quote = 
install_sh = /home/tvdstorm/Projecten/Inf/Afstuderen/Final/dn2/install-sh

lib_LIBRARIES = libDN2.a

libDN2_a_SOURCES = bbtree.c bindings.c set.c store.c taggedbuffers.c

nobase_include_HEADERS = dn2.h \
dn/action.h \
dn/agent.h \
dn/bbtree.h \
dn/bindings.h \
dn/bool.h \
dn/cell.h \
dn/data.h \
dn/datum.h \
dn/int.h \
dn/list.h \
dn/map.h \
dn/pair.h \
dn/set.h \
dn/stack.h \
dn/store.h \
dn/taggedbuffers.h \
dn/token.h

subdir = src
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_CLEAN_FILES =
LIBRARIES = $(lib_LIBRARIES)

libDN2_a_AR = $(AR) cru
libDN2_a_LIBADD =
am_libDN2_a_OBJECTS = bbtree.$(OBJEXT) bindings.$(OBJEXT) set.$(OBJEXT) \
	store.$(OBJEXT) taggedbuffers.$(OBJEXT)
libDN2_a_OBJECTS = $(am_libDN2_a_OBJECTS)

DEFS = -DPACKAGE_NAME=\"\" -DPACKAGE_TARNAME=\"\" -DPACKAGE_VERSION=\"\" -DPACKAGE_STRING=\"\" -DPACKAGE_BUGREPORT=\"\" -DPACKAGE=\"dn\" -DVERSION=\"0.1\" 
DEFAULT_INCLUDES =  -I. -I$(srcdir)
CPPFLAGS = 
LDFLAGS = 
LIBS = 
depcomp = $(SHELL) $(top_srcdir)/depcomp
am__depfiles_maybe = depfiles
DEP_FILES = ./$(DEPDIR)/bbtree.Po ./$(DEPDIR)/bindings.Po \
	./$(DEPDIR)/set.Po ./$(DEPDIR)/store.Po \
	./$(DEPDIR)/taggedbuffers.Po
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
CFLAGS = -g -O2
DIST_SOURCES = $(libDN2_a_SOURCES)
HEADERS = $(nobase_include_HEADERS)

DIST_COMMON = $(nobase_include_HEADERS) Makefile.am Makefile.in
SOURCES = $(libDN2_a_SOURCES)

all: all-am

.SUFFIXES:
.SUFFIXES: .c .o .obj
$(srcdir)/Makefile.in:  Makefile.am  $(top_srcdir)/configure.in $(ACLOCAL_M4)
	cd $(top_srcdir) && \
	  $(AUTOMAKE) --gnu  src/Makefile
Makefile:  $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)

AR = ar
libLIBRARIES_INSTALL = $(INSTALL_DATA)
install-libLIBRARIES: $(lib_LIBRARIES)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(libdir)
	@list='$(lib_LIBRARIES)'; for p in $$list; do \
	  if test -f $$p; then \
	    f="`echo $$p | sed -e 's|^.*/||'`"; \
	    echo " $(libLIBRARIES_INSTALL) $$p $(DESTDIR)$(libdir)/$$f"; \
	    $(libLIBRARIES_INSTALL) $$p $(DESTDIR)$(libdir)/$$f; \
	  else :; fi; \
	done
	@$(POST_INSTALL)
	@list='$(lib_LIBRARIES)'; for p in $$list; do \
	  if test -f $$p; then \
	    p="`echo $$p | sed -e 's|^.*/||'`"; \
	    echo " $(RANLIB) $(DESTDIR)$(libdir)/$$p"; \
	    $(RANLIB) $(DESTDIR)$(libdir)/$$p; \
	  else :; fi; \
	done

uninstall-libLIBRARIES:
	@$(NORMAL_UNINSTALL)
	@list='$(lib_LIBRARIES)'; for p in $$list; do \
	  p="`echo $$p | sed -e 's|^.*/||'`"; \
	  echo " rm -f $(DESTDIR)$(libdir)/$$p"; \
	  rm -f $(DESTDIR)$(libdir)/$$p; \
	done

clean-libLIBRARIES:
	-test -z "$(lib_LIBRARIES)" || rm -f $(lib_LIBRARIES)
libDN2.a: $(libDN2_a_OBJECTS) $(libDN2_a_DEPENDENCIES) 
	-rm -f libDN2.a
	$(libDN2_a_AR) libDN2.a $(libDN2_a_OBJECTS) $(libDN2_a_LIBADD)
	$(RANLIB) libDN2.a

mostlyclean-compile:
	-rm -f *.$(OBJEXT) core *.core

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/bbtree.Po
include ./$(DEPDIR)/bindings.Po
include ./$(DEPDIR)/set.Po
include ./$(DEPDIR)/store.Po
include ./$(DEPDIR)/taggedbuffers.Po

distclean-depend:
	-rm -rf ./$(DEPDIR)

.c.o:
	source='$<' object='$@' libtool=no \
	depfile='$(DEPDIR)/$*.Po' tmpdepfile='$(DEPDIR)/$*.TPo' \
	$(CCDEPMODE) $(depcomp) \
	$(COMPILE) -c `test -f '$<' || echo '$(srcdir)/'`$<

.c.obj:
	source='$<' object='$@' libtool=no \
	depfile='$(DEPDIR)/$*.Po' tmpdepfile='$(DEPDIR)/$*.TPo' \
	$(CCDEPMODE) $(depcomp) \
	$(COMPILE) -c `cygpath -w $<`
CCDEPMODE = depmode=gcc3
uninstall-info-am:
nobase_includeHEADERS_INSTALL = $(install_sh_DATA)
install-nobase_includeHEADERS: $(nobase_include_HEADERS)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(includedir)
	@list='$(nobase_include_HEADERS)'; for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  f="$$p"; \
	  echo " $(nobase_includeHEADERS_INSTALL) $$d$$p $(DESTDIR)$(includedir)/$$f"; \
	  $(nobase_includeHEADERS_INSTALL) $$d$$p $(DESTDIR)$(includedir)/$$f; \
	done

uninstall-nobase_includeHEADERS:
	@$(NORMAL_UNINSTALL)
	@list='$(nobase_include_HEADERS)'; for p in $$list; do \
	  f="$$p"; \
	  echo " rm -f $(DESTDIR)$(includedir)/$$f"; \
	  rm -f $(DESTDIR)$(includedir)/$$f; \
	done

ETAGS = etags
ETAGSFLAGS =

tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP) $(TAGS_FILES)
	list='$(SOURCES) $(HEADERS) $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	mkid -fID $$unique

TAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS)  $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(ETAGS_ARGS)$$tags$$unique" \
	  || $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	     $$tags $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && cd $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) $$here

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)

top_distdir = ..
distdir = $(top_distdir)/$(PACKAGE)-$(VERSION)

distdir: $(DISTFILES)
	$(mkinstalldirs) $(distdir)/dn
	@list='$(DISTFILES)'; for file in $$list; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  dir=`echo "$$file" | sed -e 's,/[^/]*$$,,'`; \
	  if test "$$dir" != "$$file" && test "$$dir" != "."; then \
	    dir="/$$dir"; \
	    $(mkinstalldirs) "$(distdir)$$dir"; \
	  else \
	    dir=''; \
	  fi; \
	  if test -d $$d/$$file; then \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -pR $(srcdir)/$$file $(distdir)$$dir || exit 1; \
	    fi; \
	    cp -pR $$d/$$file $(distdir)$$dir || exit 1; \
	  else \
	    test -f $(distdir)/$$file \
	    || cp -p $$d/$$file $(distdir)/$$file \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(LIBRARIES) $(HEADERS)

installdirs:
	$(mkinstalldirs) $(DESTDIR)$(libdir) $(DESTDIR)$(includedir)

install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	  INSTALL_STRIP_FLAG=-s \
	  `test -z '$(STRIP)' || \
	    echo "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'"` install
mostlyclean-generic:

clean-generic:

distclean-generic:
	-rm -f Makefile $(CONFIG_CLEAN_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-generic clean-libLIBRARIES mostlyclean-am

distclean: distclean-am

distclean-am: clean-am distclean-compile distclean-depend \
	distclean-generic distclean-tags

dvi: dvi-am

dvi-am:

info: info-am

info-am:

install-data-am: install-nobase_includeHEADERS

install-exec-am: install-libLIBRARIES

install-info: install-info-am

install-man:

installcheck-am:

maintainer-clean: maintainer-clean-am

maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic

uninstall-am: uninstall-info-am uninstall-libLIBRARIES \
	uninstall-nobase_includeHEADERS

.PHONY: GTAGS all all-am check check-am clean clean-generic \
	clean-libLIBRARIES distclean distclean-compile distclean-depend \
	distclean-generic distclean-tags distdir dvi dvi-am info \
	info-am install install-am install-data install-data-am \
	install-exec install-exec-am install-info install-info-am \
	install-libLIBRARIES install-man install-nobase_includeHEADERS \
	install-strip installcheck installcheck-am installdirs \
	maintainer-clean maintainer-clean-generic mostlyclean \
	mostlyclean-compile mostlyclean-generic tags uninstall \
	uninstall-am uninstall-info-am uninstall-libLIBRARIES \
	uninstall-nobase_includeHEADERS

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
