/*
 * File: 7-insert_dnodeint.c
 * Auth: Sess254
 */

#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @idx: index where to insert new node
 * @n: data to be added to new node
 * @h: pointer to first node of list
 *
 * Return: adress of new node - NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}


	current = *h;
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
