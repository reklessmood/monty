#include "monty.h"

/**
 * addnode - Adds a new node to the head of the stack.
 * @head: Pointer to the stack's head
 * @n: New value to be added
 * Return: No return value
 */
void addnode(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error\n");
		exit(EXIT_FAILURE);
	}

	if (temp)
		temp->prev = new_node;

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
