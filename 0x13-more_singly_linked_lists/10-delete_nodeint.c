/*
 *File: 10-delete_nodeint.c
 *Auth: Sess254
 */

#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 *@head: pointer to pointer of first node in the lsit
 *@index: index of node to be deleted.
 *
 *Return: 1 if succesfull, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *curr;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		curr = *head;
		*head = curr->next;
		free(curr);
		return (1);
	}                      /* if first node needs to be deleted */

	prev = *head;
	curr = prev->next;

	/* go through list to find node to be deleted */
	for (i = 1; curr != NULL && i < index; i++)
	{
		prev = curr;
		curr = curr->next;
	}

	if (curr == NULL)/* node was not found at index */
		return (-1);

	prev->next = curr->next;
	free(curr);

	return (1);
}



