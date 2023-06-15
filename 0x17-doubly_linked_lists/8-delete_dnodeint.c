/*
 * File: 8-delete_dnodeint.c
 * Auth: Sess254
 */

#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to head
 * @index: index of node to delete
 *
 * Return: success - 1, if it fails -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *c = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (c == NULL)
			return (-1);
		c = c->next;
	}

	if (c == *head)
	{
		*head = c->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		c->prev->next = c->next;
		if (c->next != NULL)
			c->next->prev = c->prev;
	}

	free(c);
	return (1);
}
