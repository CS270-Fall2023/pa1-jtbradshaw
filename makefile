#Macros
CC = gcc
FLAGS = -Wall -g

#Pattern Rule
%.o: %.c 
	$(CC) $(FLAGS) -c $<

all: main

clean:
	rm -f main.o functions.o

main: main.o functions.o
	gcc -Wall main.o functions.o -o main
	
main.o: main.c functions.c functions.h
	gcc -c main.c -o main.o

functions.o: main.c functions.c functions.h
	gcc -c functions.c -o functions.o

