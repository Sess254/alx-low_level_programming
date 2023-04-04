/*
 *File: 4-free_listint.c
 *Auth: Sess254
 */

#include "lists.h"
#include <stdlib.h>

/**
 *free_listint - frees a listint_t list
 *@head: a pointer to the listint_t list
 */

void free_listint(listint_t *head)
{
	listint_t *currentNode;

	while (head != NULL) /* goes through list to the end */
	{
		currentNode = head;/* set current notode to head node */
		head = head->next;/* move head node to next node in list */
		free(currentNode);
	}
}

