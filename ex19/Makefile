CFLAGS=-Wall -g

all: ex19

ex19: object.o
	$(CC) $(CFLAGS) ex19.c object.o -o ex19

object.o: object.c
	$(CC) $(CFLAGS) -c -o object.o object.c

clean:
	rm -f ex19