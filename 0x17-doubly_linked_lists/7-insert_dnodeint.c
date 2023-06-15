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
	dlistint_t *c = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		c = c->next;
		if (c == NULL)
			return (NULL);
	}

	if (c->next == NULL)
		return (add_dlistint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = c;
	new->next = c->next;
	c->next->prev = new;
	c->next = new;

	return (new);
}
