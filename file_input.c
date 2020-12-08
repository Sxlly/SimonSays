#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "user_input.h"

int file_reader(char filename[]) {

	int status = 0;
	FILE *fptr;

	if ((fptr = fopen(filename, "r")) == NULL) {

		status = 1;
		return status;
	}

	else {
		return status;
	}

}

	
