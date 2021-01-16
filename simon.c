#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include "simon.h"
#include "singleyll.h"
#include "main.h"



void simon_rightarm_gen() {

	FILE *fptr;
	char str[1000];


	fptr = fopen("sframebase.txt", "r");
	
	terminal_spacer();

	while (fgets(str, 1000, fptr) != NULL) {

		printf("%s", str);
	}

	fclose(fptr);

	fptr = fopen("sframe3.txt", "r");

	terminal_spacer();

	usleep(500000);

	system("clear");

	while (fgets(str, 1000, fptr) != NULL) {
		
		printf("%s", str);
	}

	fclose(fptr);
	
	fptr = fopen("sframe2.txt", "r");

	terminal_spacer();
	
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

void simon_dance_gen() {

        FILE *fptr;
        char str[1000];


        fptr = fopen("sframebase.txt", "r");

        terminal_spacer();

        while (fgets(str, 1000, fptr) != NULL) {

                printf("%s", str);
        }

        fclose(fptr);

        fptr = fopen("sframe3-1.txt", "r");

        terminal_spacer();

        usleep(500000);

        system("clear");

        while (fgets(str, 1000, fptr) != NULL) {

                printf("%s", str);
        }

	fclose(fptr);

        fptr = fopen("sframe3-2.txt", "r");

        terminal_spacer();

        usleep(500000);

        system("clear");

        while (fgets(str, 1000, fptr) != NULL) {

                printf("%s", str);
        }

	fclose(fptr);

        fptr = fopen("sframe3-3.txt", "r");

        terminal_spacer();

        usleep(500000);

        system("clear");

        while (fgets(str, 1000, fptr) != NULL) {

                printf("%s", str);
        }

	fclose(fptr);

        fptr = fopen("sframe3-4.txt", "r");

        terminal_spacer();

        usleep(500000);

        system("clear");

        while (fgets(str, 1000, fptr) != NULL) {

                printf("%s", str);
        }

	fclose(fptr);

        fptr = fopen("sframe3-5.txt", "r");

        terminal_spacer();

        usleep(500000);

        system("clear");

        while (fgets(str, 1000, fptr) != NULL) {

                printf("%s", str);
        }

	fclose(fptr);

        fptr = fopen("sframe3-6.txt", "r");

        terminal_spacer();

        usleep(500000);

        system("clear");

        while (fgets(str, 1000, fptr) != NULL) {

                printf("%s", str);
        }

	fclose(fptr);

        fptr = fopen("sframe3-5.txt", "r");

        terminal_spacer();

        usleep(500000);

        system("clear");

        while (fgets(str, 1000, fptr) != NULL) {

                printf("%s", str);
        }

	fclose(fptr);

        fptr = fopen("sframe3-4.txt", "r");

        terminal_spacer();

        usleep(500000);

        system("clear");

        while (fgets(str, 1000, fptr) != NULL) {

                printf("%s", str);
        }

	fclose(fptr);

        fptr = fopen("sframe3-3.txt", "r");

        terminal_spacer();

        usleep(500000);

        system("clear");

        while (fgets(str, 1000, fptr) != NULL) {

                printf("%s", str);
        }

	fclose(fptr);

        fptr = fopen("sframe3-2.txt", "r");

        terminal_spacer();

        usleep(500000);

        system("clear");

        while (fgets(str, 1000, fptr) != NULL) {

                printf("%s", str);
        }

	fclose(fptr);

        fptr = fopen("sframe3-1.txt", "r");

        terminal_spacer();

        usleep(500000);

        system("clear");

        while (fgets(str, 1000, fptr) != NULL) {

                printf("%s", str);
        }

	fclose(fptr);

        fptr = fopen("sframebase.txt", "r");

        terminal_spacer();

        usleep(500000);

        system("clear");

        while (fgets(str, 1000, fptr) != NULL) {

                printf("%s", str);
        }

	fclose(fptr);

}


/* function to parse commands from commands linked list to simon animation methods */
void commands_to_simon(comlist_t* list) {
	
	/* declaring variable to count current index value */
	int index_counter = 0;

	comlist_node_t* current;

	for (current = list->head; current != NULL; current = current->next) {

		index_counter++;

		if (current->value.selection == 1) {
			
			system("clear");

			simon_rightarm_gen();

			usleep(500000);
		}

		else if (current->value.selection == 2) {

			system("clear");

			simon_leftarm_gen();

			usleep(500000);
		}

		else if (current->value.selection == 3) {

			system("clear");

			simon_handonhead_gen();

			usleep(500000);
		}

		else if (current->value.selection == 4) {

			system("clear");

			simon_dance_gen();

			usleep(500000);
		}

		else {
			printf("invalid command");
		}

	}
}

	





