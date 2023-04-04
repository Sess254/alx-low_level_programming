/*
 *File: 2-add_nodeint.c
 *Auth: Sess254
 */

#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of
 * a listint_t list
 *@head: pointer to the head of listint_t list
 *@n: integer value to be added to new node.
 *
 *Return: Address of new node - NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n; /* sets value of new node */

	new->next = *head; /* makes the new node the head node */
	*head = new;

	return (new);
}



