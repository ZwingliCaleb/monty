#include "monty.h"

/**
 * len - length of stack
 * @stack: pointer to the stack
 * Return: unsigned int
 */
unsigned int len(stack_t **stack)
{
	stack_t *current;
	unsigned int l = 0;

	current = *stack;
	while (current)
	{
		current = current->next;
		l++;
	}
	return (l);
}
