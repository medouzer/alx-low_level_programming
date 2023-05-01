#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that add node at the end of the list
 * @head: is the head of the list
 * @n: is the data of the node added
 * Return: return the address of the node added
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	if (head == NULL)
		return (NULL);

	tmp = malloc (sizeof(listint_t));

	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = tmp;

	return (tmp);
}
