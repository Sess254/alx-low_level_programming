/*
 * File: 3-add_nodeint_end.c
 * Auth: Sess254
 */

#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 *list.
 *@head: pointer pointing to the head of listint_t.
 *@n: integer value to be added to new node.
 *
 *Return: the address of the new element - NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n; /* sets new value of new node */
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	} /* makes new node last node if the list is empty */

	while (last->next != NULL)
	{
		last = last->next;
	} /* goes through list to find the last node */

	last->next = new;

	return (new);
}
