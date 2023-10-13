#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: is the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	current = head;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
