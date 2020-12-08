#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include "user_input.h"
#include "data_parser.h"
#include "commands_ll.h"

int main(void) {
	
	char filename[256];
	char simon[30];
	int status, ii;

	printf("Enter File Name: ");
	scanf("%256s", filename);
	
	status = file_reader(filename);

	if (status == 0) {
		
		printf("File Exists!\n");

		data_parse(filename);

		simon[0] = " (       )\n";
		simon[1] = " (       )\n";
		simon[2] = " (       )\n";

		for (ii = 0; ii < 5; ii++) {

			printf("%s", simon[ii]);
		}



	}

	else {
		printf("File Does Not Exist!\n");
	}	
	

	return 0;
}



