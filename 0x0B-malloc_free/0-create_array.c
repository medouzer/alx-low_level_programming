#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: the size of the array
 * @c: is the char to put on the array
 * Return: return the value of malloc
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(size * sizeof(char));
	}

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}

		return (p);
	}
}
