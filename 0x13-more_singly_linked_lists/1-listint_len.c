/*
 * File: 1-listint_len.c
 * Auth: Sess254
 */

#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t
 *list
 *@h: A pointer to the head node of the linked list
 *
 *Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}



