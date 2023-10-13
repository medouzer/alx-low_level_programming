#include "lists.h"

/**
 * add_dnodeint_end - add new node to the end of the list
 * @head: is the head of the list
 * @n: is th enew node
 * Return: return the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	current = *head;
	if (*head)
	{
		while (current && current->next)
			current = current->next;
		current->next = new_node;
		new_node->prev = current;
	}
	else
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	return (new_node);
}
