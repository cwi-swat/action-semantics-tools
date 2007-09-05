CC=gcc3

bin_PROGRAMS=acr

acr_SOURCES=acr.c acr-actions.c acr-utils.c\
	api/AN-K.c api/AN-K_dict.c \
	acr-agent.c acr-sched.c

acr_LDADD=-lATerm-gcc -lAN2 -L../../an2-lib/src 

CFLAGS+=-I../../an2-lib/src  -g  -Wall 

