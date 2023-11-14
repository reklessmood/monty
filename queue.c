#include "monty.h"

/**
 * queue - Sets the stack mode to queue.
 * @head: Pointer to the stack's head
 * @counter: Line number
 * Return: No return value
 */
void queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - Adds a new node to the tail of the stack.
 * @head: Pointer to the head of the stack
 * @n: New value to be added
 * Return: No return value
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *tail;

	tail = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (tail)
	{
		while (tail->next)
			tail = tail->next;
	}

	if (!tail)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		tail->next = new_node;
		new_node->prev = tail;
	}
}
