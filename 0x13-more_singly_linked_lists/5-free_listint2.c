#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - the function that free the list and put head on NULL
 * @head: is the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
}
