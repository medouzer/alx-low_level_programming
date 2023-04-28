#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - give the number of node on a list
 * @h: is the head of the list
 * Return: return thr number on node in the list
 */

size_t list_len(const list_t *h)
{
	int counter;

	for (counter = 0; h != NULL; counter++)
		h = h->next;

	return (counter);
}
