/*
 *File: 6-pop_listint.c
 *Auth: Sess254
 */

#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - deletes the head of a node of a listint_t
 *linked list and returns the head nodes's data
 *@head: a pointer to the first node of the list
 *
 *Return: data of the deleted node - 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (head == NULL || *head == NULL)
		return (0);/* checks if list is empty */

	current = *head;/* store current in temp variable */
	*head = (*head)->next;/* update head to point to second */
	data = current->n;/* retrieve data of deleted node */
	free(current);

	return (data);
}

