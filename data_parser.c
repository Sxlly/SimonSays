#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "data_parser.h"
#include "singleyll.h"


void data_parse(char filename[256]) {

	FILE* fptr = fopen(filename, "r");

	char file_line[256];
	
	system("clear");

	printf("\t\t\t The File You Have Choosen Contains The Following: \n");

	while (fgets(file_line, sizeof(file_line), fptr)) {

		printf("\t\t\t %256s", file_line);
	}

	fclose(fptr);

}
