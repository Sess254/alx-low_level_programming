/*
 * File: 2-add_dnodeint.c
 * Auth: Sess254
 */

#include "lists.h"

/**
 * add_dnodeint - adds a new node at beginning of a dlistint_t list
 * @head: pointer to the head of list
 * @n: integer of new node
 *
 *Return: if it fails - NULL
 *address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);

}
