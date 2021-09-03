
all: main

clean:
	rm -f main.o define.o

main: main.o define.o
	gcc -o main main.o define.o

define.o: define.c define.h
	gcc -c define.c

main.o: main.c
	gcc -c main.c
