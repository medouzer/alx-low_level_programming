#include "lists.h"

/**
 * dlistint_len - length of double link list
 * @h: is the head
 * Return: return the size of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int size = 0;

	if (!current)
		return (0);
	while (current)
	{
		current = current->next;
		size++;
	}
	return (size);
}
