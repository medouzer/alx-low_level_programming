#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that add node at the beginning of th list
 * @head: is the head of the list
 * @n: is the data of this node added
 * Return: return the address of the node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
