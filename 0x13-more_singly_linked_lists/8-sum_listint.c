#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that sum all the data of the list
 * @head: is the head of the list
 * Return: the sum or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}	
