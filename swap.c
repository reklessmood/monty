#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack.
 * @head: Pointer to the stack's head
 * @counter: Line number
 * Return: No return value
 */
void swap(stack_t **head, unsigned int counter)
{
	stack_t *current;
	int len = 0, temp;

	current = *head;
	while (current)
	{
		current = current->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current = *head;
	temp = current->n;
	current->n = current->next->n;
	current->next->n = temp;
}
