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

com_t make_command() {

	com_t new_com;

	printf("Choose a command to add from the following options\n");
	printf("---------------------------------------------------\n");
	usleep(100000);
	printf("Type 1 For Simon Says Right Arm Up\n");
	usleep(100000);
	printf("Type 2 For Simon Says Left Arm Up\n");
	usleep(100000);
	printf("Type 3 For Simon Says Dance\n");

	scanf("%1d", &new_com.selection);

	usleep(250000);

	printf("Command Successfully Added!\n");

	usleep(250000);

	return new_com;
}



int main(void) {

	/* creating command list */

	comlist_t* list = create_comlist();

	while (1) {
		

		char filename[256];
		int status;
		int choice;
		int node_index;


		/* terminal formatted menu */
		
		system("clear");
		
		printf("                                   ==========================\n");
		usleep(50000);
		printf("                                           Options:  \n");
		usleep(50000);
		printf("                                      1. Import File\n");
		usleep(50000);
		printf("				      2. Give Command\n");
		usleep(50000);
		printf("				      3. Delete Command\n");
		usleep(50000);
		printf("				      4. Play Simon Says\n");
		usleep(50000);
		printf("				      5. Display Command List\n");
		usleep(50000);
		printf("				          6. Exit\n");
		usleep(50000);
		printf("				   ==========================\n");
		
		printf("Your Choice:  ");
		scanf("%1d", &choice);  

		switch(choice) {

			case 1:

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
		
			case 2:
				system("clear");

				add_command(list, make_command());

				break;

			case 3:

				system("clear");

				printf("Please Enter the Index of the Command you want to Delete: ");
				
				scanf("%1d", &node_index);

				delete_command(list, node_index-1);

				usleep(250000);

				printf("Command Successfully Deleted!\n");

				usleep(250000);


				break;

			case 4:

				commands_to_simon(list);

				break;

			case 5:
				system("clear");

				printf("Your Current Command List: \n");

				print_comlist(list);

				usleep(250000);

				break;

			case 6:
				system("clear");

				usleep(500000);
				printf("Thankyou For Playing!\n");
				usleep(500000);
				system("clear");
				printf("Quiting Game\n");
				usleep(500000);
				system("clear");
				printf("Quiting Game.\n");
				usleep(500000);
				system("clear");
				printf("Quiting Game..\n");
				usleep(500000);
				system("clear");
				printf("Quiting Game...\n");
				exit(0);
				break;

			default:

				printf("Invalid Selection!\n");
				break;



		}
	}
	
	/*freeing allocated memory for command list */
	free_comlist(list);

	
	/* main method standard exit return */
	return 0;
}

