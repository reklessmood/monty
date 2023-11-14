#include "monty.h"

/**
 * rotl - Rotates the stack to the top.
 * @head: Pointer to the stack's head
 * @counter: Line number (unused)
 * Return: No return value
 */
void rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *current = *head, *temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	temp = (*head)->next;
	temp->prev = NULL;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = *head;
	(*head)->next = NULL;
	(*head)->prev = current;
	(*head) = temp;
}
