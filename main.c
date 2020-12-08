#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include "user_input.h"
#include "data_parser.h"
#include "commands_ll.h"
#include "simon.h"

int main(void) {
	
	char filename[256];
	int status;

	printf("Enter File Name: ");
	scanf("%256s", filename);
	
	status = file_reader(filename);

	if (status == 0) {
		
		printf("File Exists!\n");

		data_parse(filename);


		simon_gen();

	}

	else {
		printf("File Does Not Exist!\n");
	}	
	

	return 0;
}



