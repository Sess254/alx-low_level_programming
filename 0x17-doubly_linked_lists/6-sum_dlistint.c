/*
 * File: 6-sum_dlistint.c
 * Auth: Sess254
 */

#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of a dlistint_t list
 * @head: pointer to head of list
 *
 * Return: sum, if list is empty - 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

