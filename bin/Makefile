PROG = execCorrida
CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11

OBJS = main.o Sapos.o Lista.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o : ../src/main.cpp
	$(CC) $(CPPFLAGS) -c ../src/main.cpp

Sapos.o : Sapos.cpp
	$(CC) $(CPPFLAGS) -c ../src/Sapos.cpp

Lista.o : Lista.cpp
	$(CC) $(CPPFLAGS) -c ../src/Lista.cpp

clean:
	rm -f core $(PROG) $(OBJS)
