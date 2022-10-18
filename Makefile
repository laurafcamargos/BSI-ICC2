CC = gcc
CFLAGS = -Wall
	
all: atividade06.o 
	$(CC) -o main atividade06.o 
	
atividade06.o: atividade06.c 
	$(CC) -c atividade06.c
	
clean:
	rm atividade06 *.o

run: main
	./main