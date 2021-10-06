CC = g++

EXEC_NAME = pgm3

CCFLAGS = -Wall

main: main.o university.o csci.o egen.o bio.o semester.o
	$(CC) $(CCFLAGS) -o $(EXEC_NAME) main.o university.o csci.o egen.o bio.o semester.o

main.o: main.cpp semester.h university.h csci.h bio.h egen.h
	$(CC) $(CFLAGS) -c main.cpp

semester.o: semester.h csci.h bio.h egen.h

bio.o: university.h bio.h 

csci.o: university.h csci.h

egen.o: university.h egen.h 

university.o: university.h




