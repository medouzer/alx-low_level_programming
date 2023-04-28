#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function that print a list of node
 * @h: is the head of the list
 * Return: return number of node in the list
 */

size_t print_list(const list_t *h)
{
	int counter;

	for (counter = 0; h != NULL; counter++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (counter);
}
