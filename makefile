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
	$(CC) $(FLAGS) $< functions.o -o $@
	
main.o: functions.h


functions.o: functions.h


