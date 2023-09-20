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
	
main.o: functions.h


functions.o: functions.h


