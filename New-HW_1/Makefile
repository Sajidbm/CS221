CC = gcc # Replace this with a different command to use a different compiler
CFLAGS = -Wall -Werror -Wextra -pedantic

all : c-intro-evaluation-implementation.o c-intro-evaluation-testing.o testing

c-intro-evaluation-implementation.o : c-intro-evaluation-implementation.c c-intro-evaluation-declarations.h
	$(CC) $(CFLAGS) -c c-intro-evaluation-implementation.c

c-intro-evaluation-testing.o : c-intro-evaluation-testing.c c-intro-evaluation-declarations.h
	$(CC) $(CFLAGS) -c c-intro-evaluation-testing.c

testing : c-intro-evaluation-implementation.o c-intro-evaluation-testing.o
	$(CC) $(CFLAGS) -o testing c-intro-evaluation-testing.o c-intro-evaluation-implementation.o

clean : 
	rm c-intro-evaluation-implementation.o c-intro-evaluation-testing.o testing