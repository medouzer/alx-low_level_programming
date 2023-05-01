#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function that print all the list
 * @h: is the head of the list
 * Return: return the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
