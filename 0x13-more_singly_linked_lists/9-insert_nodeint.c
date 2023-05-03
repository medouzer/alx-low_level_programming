#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - functio inserting node to an address
 * @head: is the head of the list
 * @idx: is the index of the new node added
 * @n: is the data of the node to add
 * Return: the address of the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *ptr = *head;
	listint_t *tmp = malloc(sizeof(listint_t));

	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
		return (NULL);

	if (idx > 0)
	{
		while (i < idx)
		{
			ptr = ptr->next;
			i++;
		}

		tmp->next = ptr->next;
		ptr->next = tmp;
		return (tmp);
	}
	return (NULL);
}
