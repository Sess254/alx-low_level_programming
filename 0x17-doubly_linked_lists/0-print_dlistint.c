/*
 * File: 0-print_dlistint.c
 * Auth: Sess254
 */

#include "lists.h"

/**
 * print_dlistint - prints elements of a dlistint_t list
 * @h: head of the dlistint_t list
 *
 * Return: elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
