

all:	test2 fac fac2

test2:	test2.c throw.o reflection.o runtime.c
	gcc test2.c throw.o reflection.o -o test2 -DDEBUG -g -O0\
	 	-I ../an2-lib/src -L ../an2-lib/src \
		-lAN2 -lchoice-dbg -L. -ldisass -lATerm-dbg



fac:	fac.c throw.o reflection.o runtime.c
	gcc fac.c throw.o reflection.o -o fac -DDEBUG -g -O0 \
	 	-I ../an2-lib/src -L ../an2-lib/src \
		-lAN2 -lchoice-dbg -L. -ldisass -lATerm-dbg

fac2:	fac2.c throw.o reflection.o runtime.c
	gcc fac2.c throw.o reflection.o -o fac2 -DDEBUG -g \
	 	-I ../an2-lib/src -L ../an2-lib/src -Wall \
		-lAN2 -lchoice-dbg -L. -ldisass -lATerm-dbg


%.o: %.c
	gcc -c $< -I ../an2-lib/src -g -O0


clean:
	rm -f *.o core