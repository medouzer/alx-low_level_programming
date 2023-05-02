#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - the function that free the list
 * @head: is the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
