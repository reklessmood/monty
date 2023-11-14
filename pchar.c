#include "monty.h"

/**
 * pchar - Prints the character at the top of the stack,
 * followed by a new line.
 * @head: Pointer to the stack's head
 * @counter: Line number
 * Return: No return value
 */
void pchar(stack_t **head, unsigned int counter)
{
	stack_t *current;

	current = *head;

	if (!current)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if (current->n > 127 || current->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", current->n);
}
