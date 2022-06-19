#include "monty.h"

/**
 * rotl - s
 * @stack: Double linked list
 * @line_number: File line execution
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void) line_number;

	if (!stack || !*stack || !(*stack)->next)
		return;
	(*stack)->next->prev = NULL;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack;
	(*stack) = (*stack)->next;
	temp->next->next = NULL;
	temp->next->prev = temp;
}

/**
 * rotr - s
 * @stack: Double linked list
 * @line_number: File line execution
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void) line_number;

	if (!stack || !*stack || !(*stack)->next)
		return;

	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = *stack;
	tmp->prev->next = NULL;
	tmp->prev = NULL;

	(*stack)->prev = tmp;
	*stack = tmp;

}

/**
 * stack - s
 * @stack: Double linked list
 * @line_number: File line execution
 */
void stack(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	(void) stack;

	var.MODE = 0;
}

/**
 * queue - s
 * @stack: Double linked list
 * @line_number: File line execution
 */
void queue(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	(void) stack;

	var.MODE = 1;
}
