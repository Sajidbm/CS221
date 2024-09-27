CC = gcc 
CFLAGS = -Wall -Wextra 

all : expo.o

# creating the implementation object files
# for every function we first want to generate the .o files (object files) without linking them to executables (.out) file.
expo.o: expo.h expo.c expo_testing.c 
	$(CC) $(CFLAGS) -c expo.c
	$(CC) $(CFLAGS) -c expo_testing.c

# testing for real rn
expo_testing: expo.o expo_testing.o
	$(CC) $(CFLAGS) -o expo_testing expo.o expo_testing.o
	
# cleaning

clean : 
	rm *.o
