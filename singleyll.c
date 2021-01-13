#include "singleyll.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "simon.h"


/* command list creation method */

comlist_t * create_comlist() {

	/* using calloc for memory allocation */
	/* setting all list nodes to hold NULL value */

	comlist_t* new_comlist = (comlist_t*)calloc(1, sizeof(comlist_t));
	return new_comlist;
}

/* print to terminal method via iteration (trickle down traversal) */

void print_comlist(comlist_t* list) {

	comlist_node_t* current;

	/* begin at head node */
	/* cont while not at tail index */
	
	/* tracks current index within linked list */

	int index_counter = 0;

	for (current = list->head; current != NULL; current = current->next) {
		
		/* increase index count by ++ every iteration */

		index_counter++;
		
		/* if current nodes value holds a integer one value stored within selection */
		if (current->value.selection == 1) {

			printf("Command No %1d = Simon Says Right Arm Up\n", index_counter);
		}

		/* if current node value holds a integer two value stored within seleciton */

		else if (current->value.selection == 2) {

			printf("Command No %1d = Simon Says Left Arm Up\n", index_counter);
		}
		
		/* if current node value holds a integer three value stored within selection */

		else if (current->value.selection == 3) {

			printf("Command No %1d = Simon Says Dance\n", index_counter);
		}
		
		/* if current node value holds a integer that matches none of above values within selection */

		else {
			printf("Command No %1d Holds an invalid command\n", index_counter);
		}
	}
}

void add_command(comlist_t* list, com_t com) {

	comlist_node_t* new_node = malloc(1*sizeof(comlist_node_t));

	new_node->value = com;
	new_node->next = list->head;
	list->head = new_node;

	/* if command list is empty the newly added node is both head and tail */

	if (list->size == 0) {

		list->tail = new_node;
	}

	list->size++;
}

void delete_command(comlist_t* list, int node_index) {

	if (list->size == 0) {

		printf("Commands List is Empty!\n");
	}
	
	/* create node structure to store current node */
	comlist_node_t* current;

	/* create ndoe structure to store previous node */
	comlist_node_t* prev;

	/* begin at head node */
	/* cont while not found given node */

	
	/* tracks current index within linked list */

	int index_counter = 0;

	/* store head node in current node */

	current = list->head;

	/* iterate through list to search for node to be deleted */

	while (current != NULL && index_counter != node_index + 1) {

		index_counter++;
		
		/* store the current node as the previous node */
		prev = current;

		/* store the next current node as the current node */
		current = current->next;

	}
	
	
	if (current == NULL) return;

	/* unlinking the found node from the list */ 
	prev->next = current->next;

	/* decrease list size by one */
	list->size--;
	
	/* deleting node (via freeing allocated memory for node) */
	free(current);

	/*set current value to null */

	current = NULL;

}

int *get_animation_stack(comlist_t* list) {
	

	comlist_node_t* current;

	int animation_stack[500];
	int index_counter = 0;

	for(current = list->head; current != NULL; current = current->next) {

		animation_stack[index_counter] = current->value.selection;

		index_counter++;
	}

	return animation_stack;


}





void free_comlist(comlist_t* list) {

	comlist_node_t* current, *next;

	while (current != NULL) {

		next = current->next;
		free(current);
		current = next;
	}

	free(list);

}






