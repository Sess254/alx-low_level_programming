/*
 *File: 9-insert_nodeint.c
 *Auth: Sess254
 */

#include "lists.h"


/**
 *insert_nodeint_at_index - inserts a node at a given poaition
 *@head: a pointer pointing to the first node of the list
 *@idx: index where the new node should be added starting at 0.
 *@n:data to be added to new node.
 *
 *Return: address of new node - NUll if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}


	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
