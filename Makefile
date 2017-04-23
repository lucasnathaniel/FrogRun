PROG = execCorrida
CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11

OBJS = main.o Sapos.o Lista.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o : main.cpp
	$(CC) $(CPPFLAGS) -c main.cpp

Sapos.o : Sapos.cpp
	$(CC) $(CPPFLAGS) -c Sapos.cpp

Lista.o : Lista.cpp
	$(CC) $(CPPFLAGS) -c Lista.cpp

clean:
	rm -f core $(PROG) $(OBJS)
