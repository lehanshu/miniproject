try : try1.o
	cc try1.o -o try
try1.o : try1.c
	cc -c try1.c
