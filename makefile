all: list.o func.o
	gcc list.o func.o
list.o: list.c func.h
	gcc -c list.c
func.o: func.c
	gcc -c func.c
run:
	./a.out
