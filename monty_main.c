#include "monty.h"
global_var var_global;

/**
 * main - monty main function
 * @ac: number of args
 * @av: command line args
 * Return: 0 on success | -1 on failer
 */
int main(int ac, char **av)
{
	stack_t *stack;

	stack = NULL;
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	read_file(av[1], &stack);
	free_dlistint(stack);
	return (0);
}
