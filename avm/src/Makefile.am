
SUBDIRS = support

lib_LIBRARIES = libAN2AIL.a

include_HEADERS=an2-ail.h an2-ail-impl.h

libAN2AIL_a_SOURCES = an2-ail.c 

bin_PROGRAMS = an2-ail-dis an2-ail-to-c avm 



an2_ail_dis_SOURCES = an2-ail-dis.c

an2_ail_dis_LDADD = -lAN2AIL -lATerm -L. -lABF -lAIL

an2_ail_to_c_SOURCES = an2-ail-to-c.c

an2_ail_to_c_LDADD = -lAN2AIL -lATerm -L. -lABF -lAIL

avm_SOURCES = avm.c

avm_LDADD = -lAN2AIL -lATerm -L. -L./support -lAN2AIL-support -lDN2 -lABF -lAIL

#fib_iter_ail_SOURCES = fib-iter-ail.c

#fib_iter_ail_LDADD = -lAN2AIL -lATerm -L. -L../../abf/src -L./support \
#	-lAN2AIL-support -L../../dn2/src -lDN2 -lABF \
#        -L../../ail/src -lAIL

#CFLAGS = -
