all : prob9 prob10 prob11 prob12

prob9 : prob9.c
	gcc prob9.c -o prob9 

prob10 : prime.o prob10.o
	gcc prime.o prob10.o -o prob10

prob11 : prob11.c 
	gcc prob11.c -o prob11

prob12 : prime.o prob12.o
	gcc prime.o prob12.o -o prob12

prime.o : prime.c prime.h
	gcc -c prime.c -o prime.o

prob10.o : prob10.c prime.c prime.h
	gcc -c prob10.c -o prob10.o

prob12.o : prob10.c prime.c prime.h
	gcc -c prob12.c -o prob12.o

.PHONY : clean
clean : 
	rm -f *.o
