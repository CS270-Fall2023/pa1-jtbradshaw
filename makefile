#Macros
CC = gcc
FLAGS = -Wall -g

#Pattern Rule
%.o: %.c 
	$(CC) $(FLAGS) -c $<

all: main

clean:
	rm -f main.o functions.o main

main: main.o functions.o
	$(CC) $(FLAGS) main.o functions.o -o main
	
main.o: main.c functions.c functions.h
	$(CC) $(FLAGS) -c main.c -o main.o

functions.o: main.c functions.c functions.h
	$(CC) $(FLAGS) -c functions.c -o functions.o

