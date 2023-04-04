/*
 *File: 5-free_listint2.c
 *Auth: Sess254
 */

#include "lists.h"
#include <stdlib.h>

/**
 *free_listint2 - Frees a linked list and sets head to NULL
 *@head: a pointer to a pointer tothe first node of list
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)/* check for empty list */
		return;

	while (*head != NULL)/* iterate over list and free each node */
	{
		current = *head;/* store current node in temp variable */
		*head = (*head)->next;/* update pointer of to next node */
		free(current);/* free current node */
	}

	*head = NULL;/* indicates its empty */
}
