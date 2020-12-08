#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include "commands_ll.h"




struct command {

	int data;
	int key;
	struct command *next;
};


struct command *head = NULL;
struct command *current = NULL;

void insert_first(int key, int data) {

	struct command *link = (struct command*) malloc(sizeof(struct command));

	link -> key = key;
	link -> data = data;

	link -> next = head;

	head = link;
}

struct command* del_first() {

	struct command *temp_link = head;

	head = head -> next;

	return temp_link;
}

bool is_empty() {

	return head == NULL;
}

int list_size() {

	int size = 0;
	struct command *current;

	for (current = head; current != NULL; current -> next) {

		size++;
	}

	return size;
}

struct command* find_com(int key) {

	struct command* current = head;

	if (head == NULL) {
		
		return NULL;
	}

	while (current -> key != key) {

		if (current -> next == NULL) {

			return NULL;
		}

		else {
			current = current -> next;
		}
	}

	return current;
}

struct command* del_com(int key) {

	struct command* current = head;
	struct command* previous = NULL;

	if (head == NULL) {
		
		return NULL;
	}

	while (current -> key != key) {

		if(current -> next == NULL) {

			return NULL;
		}

		else {
			previous = current;
			current = current -> next;
		}
	}

	if (current ==  head) {

		head = head -> next;
	}

	else {

		previous -> next = current -> next;
	}

	return current;
}

void reverse_list(struct command** head_reference) {

	struct command* prev = NULL;
	struct command* current = *head_reference;
	struct command* next;

	while (current != NULL) {

		next = current -> next;
		current -> next = prev;
		prev = current;
		current = next;
	}

	*head_reference = prev;
}








