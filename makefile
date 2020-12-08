CC = gcc
OBJ = main.o file_input.o data_parser.o commands_ll.o simon.o
CFLAGS = -Wall
EXEC = SimonSays


SimonSays: $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

main.o: main.c user_input.h data_parser.h commands_ll.h simon.h
	$(CC) $(CFLAGS) main.c -c

file_input.o: file_input.c user_input.h
	$(CC) $(CFLAGS) file_input.c -c

data_parser.o: data_parser.c data_parser.h
	$(CC) $(CFLAGS) data_parser.c -c

commands_ll.o: commands_ll.c commands_ll.h
	$(CC) $(CFLAGS) commands_ll.c -c

simon.o: simon.c simon.h
	$(CC) $(CFLAGS) simon.c -c

clean: 
	rm -f $(OBJ) $(EXEC)
