#include "monty.h"

/**
 * pall - Prints the elements of the stack.
 * @head: Pointer to the stack's head
 * @counter: Not used
 * Return: No return value
 */
void pall(stack_t **head, unsigned int counter)
{
	stack_t *current;
	(void)counter;

	current = *head;
	if (current == NULL)
		return;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
