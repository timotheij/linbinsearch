CC = gcc
CFLAGS = -Wall -g

all: linsearch binsearch

linsearch: linsearch.o search.o

linsearch.o: linsearch.c search.h

binsearch: binsearch.o search.o

binsearch.o: binsearch.c search.h

Search.o: search.c search.h

.PHONY: clean

clean:
	$(RM) *.o linsearch binsearch
