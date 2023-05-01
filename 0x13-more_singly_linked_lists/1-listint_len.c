#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - function that return the numbers of nodes
 * @h: is the head of the list
 * Return: return the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
