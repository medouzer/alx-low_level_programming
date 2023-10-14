#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: is the head of the list
 * @idx: is the index to insert node
 * @n: is the value
 * Return: return address of the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *nav, *before;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	nav = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (nav)
	{
		if (i == idx - 1)
			before = nav;
		if (i == idx)
		{
			new_node->next = nav;
			nav->prev = new_node;
			before->next = new_node;
			new_node->prev = before;
			return (new_node);
		}
		if (!nav->next && i + 1 == idx)
			return (add_dnodeint_end(h, n));
		nav = nav->next;
		i++;
	}
	return (NULL);
}
