#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include "simon.h"



void simon_rightarm_gen() {

	FILE *fptr;
	char str[1000];


	fptr = fopen("sframebase.txt", "r");

	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);
	}

	fclose(fptr);

	fptr = fopen("sframe3.txt", "r");

	usleep(500000);

	system("clear");

	while (fgets(str, 1000, fptr) != NULL) {
		
		printf("%s", str);
	}

	fclose(fptr);
	
	fptr = fopen("sframe2.txt", "r");
	
	usleep(500000);

	system("clear");

	while (fgets(str, 1000, fptr) != NULL) {
		
		printf("%s", str);
	}
	
	fclose(fptr);
	
	fptr = fopen("sframe1.txt", "r");
	
	usleep(500000);

	system("clear");

	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);
	}
	
	fclose(fptr);
	
	fptr = fopen("sframe2.txt", "r");
	
	usleep(500000);
	
	system("clear");
	
	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);
	}
	
	fclose(fptr);
	
	fptr = fopen("sframe3.txt", "r");
	
	usleep(500000);
	
	system("clear");

	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);
	}
	
	fclose(fptr);
	
	fptr = fopen("sframebase.txt", "r");
	
	usleep(500000);

	system("clear");
	
	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);
	}
	
	fclose(fptr);	

}



void simon_leftarm_gen() {
	
	FILE *fptr;
	char str[1000];


	fptr = fopen("sframebase.txt", "r");

	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);
	}

	fclose(fptr);

	fptr = fopen("sframe1-1.txt", "r");
	usleep(500000);
	system("clear");

	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);
	}

	fclose(fptr);

	fptr = fopen("sframe1-2.txt", "r");
	usleep(500000);
	system("clear");

	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);
	}

	fclose(fptr);

	fptr = fopen("sframe1-3.txt", "r");
	usleep(500000);
	system("clear");

	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);
	}

	fclose(fptr);

	fptr  = fopen("sframe1-2.txt", "r");
	usleep(500000);
	system("clear");

	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);

	}

	fclose(fptr);

	fptr = fopen("sframe1-1.txt", "r");
	usleep(500000);
	system("clear");

	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);
	}

	fclose(fptr);

	fptr = fopen("sframebase.txt", "r");
	usleep(500000);
	system("clear");

	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);
	}

	fclose(fptr);

}


void simon_handonhead_gen() {

	FILE *fptr;
	char str[1000];


	fptr = fopen("sframebase.txt", "r");

	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);
	}

	fclose(fptr);

	fptr = fopen("sframe2-1.txt", "r");
	usleep(500000);
	system("clear");

	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);
	}

	fclose(fptr);

	fptr = fopen("sframe2-2.txt", "r");
	usleep(500000);
	system("clear");

	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);
	}

	fclose(fptr);

	fptr = fopen("sframe2-3.txt", "r");
	usleep(500000);
	system("clear");

	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);

	}

	fclose(fptr);

	fptr = fopen("sframe2-2.txt", "r");
	usleep(500000);
	system("clear");

	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);
	}

	fclose(fptr);

	fptr = fopen("sframe2-1.txt", "r");
	usleep(500000);
	system("clear");

	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);

	}

	fclose(fptr);

	fptr = fopen("sframebase.txt", "r");
	usleep(500000);
	system("clear");

	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);
	}

	fclose(fptr);
}


void commands_to_simon(char *animation_commands) {

	int ii;

	for (ii = 0; ii < 10; ii++) {

		printf("%d", animation_commands[ii]);

	}



}





