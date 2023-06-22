/*
 * File: monty_funcs1.c
 * Auth:Sess254
 */

#include "monty.h"

/**
 * m_push - pushes an element to the stack
 * @stack: double pointer to the stack
 * @line_number: line number for the errors
 *
 * Return: void
 */
void m_push(stack_t **stack, unsigned int line_number)
{
	void(line_number);
	stack_t *new, *temp = *stack;
	int n = first->n;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		first->error_code = -1;
		return;
	}
	if (*stack == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		new->n = n;
		*stack = new;
		return;
	}
	while (temp->next != NULL)
		temp = temp->next;
	new->n = n;
	temp->next = new;
	new->prev = temp;
	new->next = NULL;
}
