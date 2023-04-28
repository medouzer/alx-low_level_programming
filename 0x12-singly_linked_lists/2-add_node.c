#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds new node at the beginning of a list
 * @head: is the head of the list
 * @str: is the string insert into case
 * Return: get the address of the element added
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *add_new;
	add_new = malloc(sizeof(list_t));

	if (add_new == NULL)
		return (NULL);
	add_new->str = strdup(str);

	while (str[i])
		i++;

	add_new->len = i;
	add_new->next = *head;
	*head = add_new;

	return (add_new);
}
