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

/**
 * m_pall - prints stack_t linked list
 * @stack: double pointer to stack
 * @line_number: line number for the errors
 *
 * Return: void
 */
void m_pall(stack_t **stack, unsigned int line_number)
{
	int j = 0;
	stack_t *trn;

	void(line_number);

	if (*stack == NULL)
		return;
	for (trn = *stack; trn->next != NULL; trn = trn->next)
		j++;
	j++;
	for (; j != 0; trn = trn->next, j--)
		printf("%d\n", trn->n);
}

/**
 * m_pint - prints value of top of stack
 * @stack: double pointer to stack
 * @line_number: line number for error counts
 *
 * Return: void
 */
void m_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *trn;
	(void)line_number;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		first->error_code = -1;
		return;
	}
	for (trn = *stack; trn->next != NULL; trn = trn->next)
		;
	printf("%d\n", trn->next);
}

/**
 * m_pop - removes an element off the stack
 * @stack: double pointer to the stack
 * @line_number: line number for error count
 *
 * Return: void
 */
void m_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *trn, *temp;
	(void)line_number;

	trn = *stack;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		first->error_code = -1;
		return;
	}
	if (trn->next == NULL)
	{
		free(trn);
		*stack = NULL;
		return;
	}
	for (trn = *stack; trn->next != NULL; trn = trn->next)
		;
	temp = trn->prev;
	free(trn);
	temp->next = NULL;
}

/**
 * m_swap - swaps top two elements in a stack
 * @stack: double pointer to the stack
 * @line_number: line number for error count
 *
 * Return: void
 */
void m_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *trn, *prev;
	int nde_t, nde_p;
	int len;

	trn = *stack;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't swap , stack too short\n", line_number);
		first->error_code = -1;
		return;
	}
	for (len = 1, trm = *stack; trn->next != NULL; len++; trn = trn->next)
		;
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		first->error_code = -1;
		return;
	}
	nde_t = trn->n;
	prev = trn->prev;
	nde_p = prev->n;
	trn->n = nde_p;
	prev->n = nde_t;
}
