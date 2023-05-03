#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - the function that return the node you want
 * @head: is the head of the list
 * @index: is the index of the node you want to get
 * Return: return the node or null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int current = 0;

	if (head == NULL || tmp == NULL)
		return (NULL);

	while (current != index)
	{
		current++;
		tmp = tmp->next;
	}

	return (tmp);
}
