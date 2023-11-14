#include "monty.h"

/**
 * mul - Multiplies the top two elements of the stack.
 * @head: Pointer to the stack's head
 * @counter: Line number
 * Return: No return value
 */
void mul(stack_t **head, unsigned int counter)
{
	stack_t *current;
	int stack_len = 0, result;

	current = *head;
	while (current)
	{
		current = current->next;
		stack_len++;
	}

	if (stack_len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current = *head;
	result = current->next->n * current->n;
	current->next->n = result;
	*head = current->next;
	free(current);
}
