CC = gcc
CCFLAGS = -o 

matmul: main.o matmult.o
	$(CC) -o matmult main.o matmult.o

matmult.o: matmult.c
	$(CC) -c matmult.c

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f *.o
