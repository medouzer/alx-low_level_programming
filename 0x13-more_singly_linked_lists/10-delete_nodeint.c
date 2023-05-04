#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - functio ndeleting node at index
 * @head: is the head of the list
 * @index: is the index of the node to delete
 * Return: return the 1 if succeeded or -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *ptr = *head;
	listint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	while (tmp)
	{
		if (i == index)
		{
			ptr = tmp->next;
			tmp->next = ptr->next;
			free(ptr);
			ptr = NULL;
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
