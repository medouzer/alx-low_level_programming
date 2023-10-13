#include "lists.h"

/**
 * get_dnodeint_at_index - get the node in a position index
 * @head: is the head of the list
 * @index: is the index to get node
 * Return: return the the node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	current = head;
	while (index > 0 && current)
	{
		index--;
		current = current->next;
	}
	return (current);
}
