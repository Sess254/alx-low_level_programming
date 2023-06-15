/*
 * File: 5-get_dnodeint.c
 * Auth: Sess254
 */
#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t list
 * @head: pointer to first node of list
 * @index: index of node returned, starting at 0
 *
 * Return: pointer to nth of list - NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		count++;

		current = current->next;
	}

	return (NULL);
}
