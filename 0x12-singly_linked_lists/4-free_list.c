#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - function that free the list
 * @head: is the head of the list
 */

void free_list(list_t *head)
{
	list_t *tmp = head;

	while (tmp != NULL)
	{
		free(head->str);
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
