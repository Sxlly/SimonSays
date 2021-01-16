#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <time.h>
#include "main.h"
#include "user_input.h"
#include "data_parser.h"
#include "singleyll.h"
#include "simon.h"


/* onboard main method to create a command which is then added to command list */

/* using struct from singleyll (linked list) header file */
com_t make_command() {
	
	/* using node struct from singleyll (linked list)  to hold new command */
	com_t new_com;
	
	/* print statements to show user options to choose from */
	printf("\t\tChoose a command to add from the following options\n");
	printf("\t\t---------------------------------------------------\n");
	usleep(100000);
	printf("\t\t\tType 1 For Simon Says Right Arm Up\n");
	usleep(100000);
	printf("\t\t\tType 2 For Simon Says Left Arm Up\n");
	usleep(100000);
	printf("\t\t\tType 3 For Simon Says Hands On Head\n");
	usleep(100000);
	printf("\t\t\tType 4 For Simon Says Dance\n");
	usleep(100000);
	printf("\t\t\tType 5 For Simon Didn't Say Right Arm Up\n");
	usleep(100000);
	printf("\t\t\tType 6 For Simon Didn't Say Left Arm Up\n");
	usleep(100000);
	printf("\t\t\tType 7 For Simon Didn't Say Hands On Head\n");
	usleep(100000);
	printf("\t\t\tType 8 For Simon Didn't Say Dance\n");
	
	/* using input scan to obtain selection value from user -> then stored in the new commands selection value */
	printf("\t\t\tYour Choice: ");
	scanf("%1d", &new_com.selection);
	
	/* print statements to confirm new commands addition to the linked list */
	usleep(250000);

	printf("Command Successfully Added!\n");

	usleep(250000);

	/* return new command node */

	return new_com;
}


/* method to emulate css type design via centering main menu */
void terminal_spacer() {

	int ii;

	for (ii = 0; ii < 6; ii++) {

		printf("\n");
	}
}

/* method to add all commands from text file to command list */
void add_file_commands(comlist_t* list, char filename[256]) {
	
	/* declaring a new object of node structure to act as new command */
	com_t new_com;
	
	/* declaring valid command strings */
	char simon_s_ra[100] = "simon said right arm up\n";
	char simon_s_la[100] = "simon said left arm up\n";
	char simon_s_hoh[100] = "simon said hands on head\n";
	char simon_s_dan[100] = "simon said dance\n";
	char simon_ds_ra[100] = "simon didn't say right arm up\n";
	char simon_ds_la[100] = "simon didn't say left arm up\n";
	char simon_ds_hoh[100] = "simon didn't say hands on head\n";
	char simon_ds_dan[100] = "simon didn't say dance\n";	

	FILE* fptr = fopen(filename, "r");

	char file_line[100];

	while (fgets(file_line, sizeof(file_line), fptr)) {
		
		
		printf("%s", file_line);

		usleep(1000000);

		if (strcmp(file_line, simon_s_ra) == 0) {

			new_com.selection = 1;
			add_command(list, new_com); 	
			usleep(500000);
		}

		else if (strcmp(file_line, simon_s_la) == 0) {

			new_com.selection = 2;
			add_command(list, new_com);
			usleep(500000);
		}

		else if (strcmp(file_line, simon_s_hoh) == 0) {

			new_com.selection = 3;
			add_command(list, new_com);
			usleep(500000);
		}

		else if (strcmp(file_line, simon_s_dan) == 0) {

			new_com.selection = 4;
			add_command(list, new_com);
			usleep(500000);
		}

		else if (strcmp(file_line, simon_ds_ra) == 0) {

			printf("\n");
		}

		else if (strcmp(file_line, simon_ds_la) == 0) {

			printf("\n");
		}

		else if (strcmp(file_line, simon_ds_hoh) == 0) {

			printf("\n");
		}

		else if (strcmp(file_line, simon_ds_dan) == 0) {

			printf("\n");
		}

		else {
			printf("invalid command!\n");
			usleep(500000);
		}
	}

	fclose(fptr);

}




/* default main method */
/* with static variables to support command line input */
int main(int argc, char* argv[]) {
	
	int cla;
	
	/* if there is no additional command line argument -> set cla to one (False) */
	if (argc == 1) {

		cla = 1;
	}
	
	/* if there is one additional command line argument -> set cla to zero (True) */
	else if (argc == 2) {
		
		/* declaring status variable to act as boolean */
		int status;

		cla = 0;
		
		/* parse filename into file reader method to verify its existence */
		status = file_reader(argv[1]);
		
		/* if status is equal to zero (True) keep cla as zero (True) */
		if (status == 0) {

			cla = 0;
			data_parse(argv[1]);

			usleep(500000);
		}
		
		/* else -> kill switch runtime via return zero */
		else {	
			free(argv);
			return 0;
		}
	}
	
	/* else -> kill switch runtime via return zero */
	/* firstly printing instructions on how to use program */
	else {

		system("clear");
		terminal_spacer();
		terminal_spacer();

		printf("\t\t\tGot Stuck? \n");
		printf("\t\t\tUser Instructions\n");
		printf("\t\t\tRun Via Typing ./SimonSays into command line\n");
		printf("\t\t\tRun With a Initial File Via Typing ./SimonSays filename.type\n");
		printf("\t\t\tAny Additional commandline arguments given after a filename will result in a runtime error!\n");
		return 0;
	}


	/* creating linked list */

	comlist_t* list = create_comlist();

	/* adding commandline argument file commands to list */
	/* if commandline file was given and verified */
	if (cla == 0) {

		add_file_commands(list, argv[1]);
	}

	/* main menu infinite while loop -> while not break */
	while (1) {
		
		/* functionality variables declared */
		char filename[256];
		int status;
		int choice;
		int node_index;


		/* terminal formatted menu */
		/* clearing current system terminal content */
		system("clear");
		
		
		/* using terminal spacer funtion */
		terminal_spacer();
		

		/* print statements for main menu */
		/* using usleep to sleep the processing for aesthetics */
		printf("                                      ==========================\n");
		usleep(50000);
		printf("                                              Options:  \n");
		usleep(50000);
		printf("                                         1. Import File\n");
		usleep(50000);
		printf("      				         2. Give Command\n");
		usleep(50000);
		printf(" 				    3. Delete Command By Index\n");
		usleep(50000);
		printf("				        4. Play Simon Says\n");
		usleep(50000);
		printf("				       5. Display Command List\n");
		usleep(50000);
		printf("				              6. Exit\n");
		usleep(50000);
		printf("				      ===========================\n");
		
		/* obtaining choice as an integer from the user via terminal input scan */
		printf("                                          Your Choice:  ");
		scanf("%1d", &choice);  
		
		/* switch structure which is parsed int choice  */
		switch(choice) {
			
			/* if case->choice is equal to one */
			case 1:

				system("clear");
				terminal_spacer();

				printf("\t\t\tEnter File Name: ");
				scanf("%256s", filename);
				
				/* passing given file to file reader function which verifies it's existence within home search path (working directory) */
				status = file_reader(filename);

				if (status == 0) {

					terminal_spacer();
					printf("\t\t\tFile Exists!\n");
					
					/* display to user what the file contains via printing to terminal */
					data_parse(filename);
					
					/* add all of these commands to the current command list */
					add_file_commands(list, filename);

					break;

				}	

				else {
					terminal_spacer();
					printf("\t\t\tFile Does Not Exist!\n");
					break;
				}	
			
			/* if case->choice is equal to two */
			case 2:
				system("clear");

				terminal_spacer();

				add_command(list, make_command());

				break;
			
			/* if case->choice is equal to three */
			case 3:

				system("clear");

				terminal_spacer();

				printf("\t\t\t Please Enter the Index of the Command you want to Delete: ");
				
				scanf("%1d", &node_index);

				delete_command(list, node_index-1);

				usleep(250000);

				printf("\t\t\t Command Successfully Deleted!\n");

				usleep(250000);

				break;
			
			/* if case->choice is equal to four */
			case 4:

				commands_to_simon(list);

				break;
			
			/* if case->choice is equal to five */
			case 5:
				system("clear");

				terminal_spacer();

				printf("\t\t\tYour Current Command List: \n");

				print_comlist(list);

				usleep(250000);

				break;

			/* if case->choice is equal to six (also exit->contains while loop break->exit(zero)) */
			case 6:
				system("clear");

				terminal_spacer();
				terminal_spacer();

				usleep(500000);
				printf("\t\t\t\t Thankyou For Playing!\n");
				usleep(500000);
				system("clear");
				terminal_spacer();
				printf("\t\t\t\t Quiting Game\n");
				usleep(500000);
				system("clear");
				terminal_spacer();
				printf("\t\t\t\t Quiting Game.\n");
				usleep(500000);
				system("clear");
				terminal_spacer();
				printf("\t\t\t\t Quiting Game..\n");
				usleep(500000);
				system("clear");
				terminal_spacer();
				printf("\t\t\t\t Quiting Game...\n");
				exit(0);
				break;
			
			/* if case->choice is equal to none of above (default) */
			default:

				printf("\t\t\tInvalid Selection!\n");
				break;



		}
	}
	
	/*freeing allocated memory for command list */
	free_comlist(list);
	
	/* main method standard exit return */
	return 0;
}

