#ifndef SINGLEYLL_H
#define SINGLEYLL_H

/* structure for creating a command */

typedef struct command {

	int selection;

} com_t;

/* node structure */

typedef struct comlist_node {

	com_t value;
	struct comlist_node* next;

}comlist_node_t;

/* linked list structure */

typedef struct comlist {

	comlist_node_t* head;
	comlist_node_t* tail;
	int size;

}comlist_t;

comlist_t* create_comlist();

void print_comlist(comlist_t* list);
void add_command(comlist_t* list, com_t com);
void free_comlist(comlist_t* list);
void delete_command(comlist_t* list, int node_index);
int *get_animation_stack(comlist_t* list);
 
#endif /* SINGLEYLL_H */
