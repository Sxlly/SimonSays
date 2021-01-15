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



/* default main method */
/* with static variables to support command line input */
int main(int argc, char* argv[]) {
	
	int cla;
	
	/* if there is no additional command line argument -> set cla to one (False) */
	if (argc == 1) {

		cla = 1;
		printf("%1d", cla);
	}
	
	/* if there is one additional command line argument -> set cla to zero (True) */
	else if (argc == 2) {
		
		/* declaring status variable to act as boolean */
		int status;

		cla = 0;
		printf("%1d", cla);
		
		/* parse filename into file reader method to verify its existence */
		status = file_reader(argv[1]);
		
		/* if status is equal to zero (True) keep cla as zero (True) */
		if (status == 0) {

			cla = 0;
			data_parse(argv[1]);
		}
		
		/* else -> kill switch runtime via return zero */
		else {
			return 0;
		}
	}
	
	/* else -> kill switch runtime via return zero */
	else {
		return 0;
	}


	/* creating linked list */

	comlist_t* list = create_comlist();

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
		printf(" 				        3. Delete Command\n");
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

				printf("Enter File Name: ");
				scanf("%256s", filename);
				
				/* passing given file to file reader function which verifies it's existence within home search path (working directory) */
				status = file_reader(filename);

				if (status == 0) {
		
					printf("File Exists!\n");

					data_parse(filename);

					break;

				}	

				else {
					printf("File Does Not Exist!\n");
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

				usleep(500000);
				printf("\t\t\t Thankyou For Playing!\n");
				usleep(500000);
				system("clear");
				terminal_spacer();
				printf("\t\t\t Quiting Game\n");
				usleep(500000);
				system("clear");
				terminal_spacer();
				printf("\t\t\t Quiting Game.\n");
				usleep(500000);
				system("clear");
				terminal_spacer();
				printf("\t\t\t Quiting Game..\n");
				usleep(500000);
				system("clear");
				terminal_spacer();
				printf("\t\t\t Quiting Game...\n");
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

