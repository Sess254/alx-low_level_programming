/*
 *File: 8-sum_listint.c
 *Auth: Sess254
 */

#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data (n) of
 * a  listint_t linked list
 *@head: pointer to the first node of the list
 *
 *Return: the sum of all the data in the list - 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	/* go through the list and add up data in each node */
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}





