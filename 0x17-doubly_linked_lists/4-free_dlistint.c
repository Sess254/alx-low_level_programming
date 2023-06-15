/*
 * File: 4-free_dlistint.c
 * Aut: Sess254
 */

#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
