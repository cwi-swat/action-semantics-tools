

bin_PROGRAMS=bail

data_DATA=share/action-def.baf

bail_SOURCES=\
	ail2abf.c ail2abf.h\
	api/AIL.c api/AIL.h\
	api/AIL_dict.c api/AIL_dict.h\
	opt/ailc-opt.c opt/ailc-opt.h\
	ailc-main.c


noinst_HEADERS=ail2abf.h api/AIL.h opt/ailc-opt.h

bail_LDADD=-lATerm -lmept -lABF -lopts 

#CFLAGS+= -I../../abf/src -I../../ail/src

