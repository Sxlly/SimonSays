CC = gcc
OBJ = main.o file_input.o data_parser.o singleyll.o simon.o
CFLAGS = -Wall
EXEC = SimonSays


SimonSays: $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

main.o: main.c main.h user_input.h data_parser.h singleyll.h simon.h
	$(CC) $(CFLAGS) main.c -c

file_input.o: file_input.c user_input.h
	$(CC) $(CFLAGS) file_input.c -c

data_parser.o: data_parser.c data_parser.h
	$(CC) $(CFLAGS) data_parser.c -c

singleyll.o: singleyll.c singleyll.h simon.h
	$(CC) $(CFLAGS) singleyll.c -c

simon.o: simon.c simon.h singleyll.h
	$(CC) $(CFLAGS) simon.c -c

clean: 
	rm -f $(OBJ) $(EXEC)
