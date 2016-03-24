#specify compiler
OPTS = -Wall -o
CC = gcc
clean:
	rm 	-f	ex11
	rm	-f	ex1
	rm	-f 	ex4
	rm 	-f	ex7
	rm 	-f 	ex8
	rm 	-f	ex9
	rm 	-f 	ex10
	rm 	-f	ex13
	rm 	-f	ex14
all:
	make ex1
	make ex3
ex1: 
	gcc -o ex1 -Wall ex1.c
ex11: 
	gcc -o ex11 -Wall ex11.c
ex4:
	gcc -o ex4 -Wall ex4.c

ex7:
	gcc -o ex7 -Wall ex7.c
ex8:
	gcc -o ex8 -Wall ex8.c
ex9:
	gcc -o ex9 -Wall ex9.c
ex10:
	gcc -o ex10 -Wall ex10.c
ex13:
	gcc -o ex13 -Wall ex13.c
ex14:
	gcc -o ex14 -Wall ex14.c
