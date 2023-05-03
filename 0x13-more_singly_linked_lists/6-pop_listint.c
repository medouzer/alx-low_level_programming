#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - the function that del the first node
 * @head: is the head of the list
 * Return: return the the data of the node deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int data;

	if (*head == NULL)
		return (0);

	*head = tmp->next;
	data = tmp->n;
	free(tmp);
	tmp = NULL;

	return (data);
}
