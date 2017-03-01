CFLAGS= -Wall -Wextra -g

main: main.o abr.o

main.o: abr.h main.c

tas.o: abr.c abr.h

clean:
	rm -rf *.o
	rm -rf main
