#include "monty.h"

/**
 * _isalpha - checks if is alphabet
 * @c: number
 * Return: 1 OK | 0 NO
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

/**
 * _rotr - mod top of stack
 * @stack: pointer to head node
 * @line_number: number of lines opcode occurs o
 */
void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *runner = *stack;

	int aux1 = 0;

	if (!line_number || !stack || !*stack || !(*stack)->next)
		return;

	while (runner->next)
		runner = runner->next;

	aux1 = runner->n;

	while (runner->prev)
	{
		runner = runner->prev;
		runner->next->n = runner->n;
	}

	runner->n = aux1;
}
