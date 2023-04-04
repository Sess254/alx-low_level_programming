/*
 *File: 7-get_nodeint.c
 *Auth: Sess254
 */

#include "lists.h"
#include <stdio.h>

/**
 *get_nodeint_at_index - returns the nth node of a listint_t
 *linked list
 *@index: index of node returned, starting at 0
 *@head: pointer to the first node of the list
 *
 *Return: a pointer to the nth of the list - NULL if node does
 *not exit
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index) /* returns requested index */
			return (current);

		count++; /* increiments and moves to the next node */

		current = current->next;
	}

	return (NULL);
}
