#include "lists.h"

/**
 * print_dlistint - print element of double link list
 * @h: is the head
 * Return: return the size of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int size = 0;

	if (!current)
		return (0);
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		size++;
	}
	return (size);
}
