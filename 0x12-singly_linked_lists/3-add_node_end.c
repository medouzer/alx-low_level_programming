#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - function that add node atthe end
 * @head: is the head of the list
 * @str: is string on the list
 * Return: return the address of the node added
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *ptr = *head;

	tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);

	tmp->len = strlen(str);
	tmp->next = NULL;

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = tmp;

	return (tmp);
}
