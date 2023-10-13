#include "lists.h"

/**
 * add_dnodeint - add new node to the list
 * @head: is the head of the list
 * @n: is the new node
 * Return: return the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (*head)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	else
		new_node->next = NULL;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
