/*
 * File: 1-dlistint_len.c
 * Sess254
 */

#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked dlistint_t list
 * @h: head
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
