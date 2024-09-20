CC = gcc 
CFLAGS = -Wall -Wextra 

all : choose_mover.o find_divisor.o powers.o fibonacci.o choose_mover_testing find_divisor_testing powers_testing fibonacci_testing 


# creating the implementation object files
# for every function we first want to generate the .o files (object files) without linking them to executables (.out) file.
choose_mover.o: choose_mover.c choose_mover.h choose_mover_testing.c
	$(CC) $(CFLAGS) -c choose_mover.c
	$(CC) $(CFLAGS) -c choose_mover_testing.c

find_divisor.o: find_divisor.c find_divisor.h find_divisor.c
	$(CC) $(CFLAGS) -c find_divisor.c
	$(CC) $(CFLAGS) -c find_divisor_testing.c
	
powers.o: powers.c powers.h powers_testing.c
	$(CC) $(CFLAGS) -c powers.c
	$(CC) $(CFLAGS) -c powers_testing.c

fibonacci.o: fibonacci.c fibonacci.h fibonacci_testing.c
	$(CC) $(CFLAGS) -c fibonacci.c
	$(CC) $(CFLAGS) -c fibonacci_testing.c


# testing for real rn

choose_mover_testing: choose_mover.o choose_mover_testing.o
	$(CC) $(CFLAGS) -o choose_mover_testing choose_mover.o choose_mover_testing.o

find_divisor_testing: find_divisor.o find_divisor_testing.o
	$(CC) $(CFLAGS) -o find_divisor_testing find_divisor.o find_divisor_testing.o

powers_testing: powers.o powers_testing.o
	$(CC) $(CFLAGS) -o powers_testing powers.o powers_testing.o

fibonacci_testing: fibonacci.o fibonacci_testing.o 
	$(CC) $(CFLAGS) -o fibonacci_testing fibonacci.o fibonacci_testing.o 

additional: *.h choose_mover.c find_divisor.c powers_testing.c additional.c fibonacci.c
	$(CC) $(CFLAGS) additional.c choose_mover.c find_divisor.c powers.c fibonacci.c *.h
	rm *.gch *.o
	
# cleaning

clean : 
	rm *.o
