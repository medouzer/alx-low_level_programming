#include "lists.h"

/**
 * sum_dlistint - make the some of the node
 * @head: is the head of the list
 * Return: return the sum of the nodes
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;
	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
