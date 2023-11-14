#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void add(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	current = *head;
	result = current->n + current->next->n;
	current->next->n = result;
	*head = current->next;
	free(current);
}
