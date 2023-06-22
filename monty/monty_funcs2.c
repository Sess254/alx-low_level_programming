/*
 * File: monty_funcs2.c
 * Auth: Sess254
 */

#include "monty.h"

/**
 * m_add - adds the value of the top two elements
 * @stack: double pointer to the stack
 * @line_number:line number for error count
 *
 * Return: void
 */
void m_add(stack_t **stack, unsigned int line_number)
{
	stack_t *trn = *stack, *prev = NULL;
	int val_a = 0, val_b = 0;

	if ((*stack == NULL) || (trn->next == NULL))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		first->error_code = -1;
		return;
	}
	for (; trn->next != NULL; trn = trn->next)
		;
	val_a = trn->n;
	prev = trn->prev;
	val_b = prev->n;
	prev->n = val_a + val_b;
	m_pop(stack, line_number);
}

/**
 * m_nop - doesn't do a thing
 * @stack: double pointer to the stack
 * @line_number: line number for error count
 *
 * Return: void
 */
void m_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
