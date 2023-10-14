#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index
 * @head: is the head of the list
 * @index: the index to delete the node
 * Return: return 1 if deleted or -1 if not deleted
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;

	current = *head;
	if (!current)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (index > 0 && current)
	{
		current = current->next;
		index--;
	}
	if (!current)
		return (-1);
	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
