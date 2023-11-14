#include "monty.h"

/**
 * sub - Subtracts the top element of the
 * stack from the second top element.
 * @head: Pointer to the stack's head
 * @counter: Line number
 * Return: No return value
 */
void sub(stack_t **head, unsigned int counter)
{
	stack_t *current;
	int difference, num_nodes;

	current = *head;
	for (num_nodes = 0; current != NULL; num_nodes++)
		current = current->next;

	if (num_nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current = *head;
	difference = current->next->n - current->n;
	current->next->n = difference;
	*head = current->next;
	free(current);
}
