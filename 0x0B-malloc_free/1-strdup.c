#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy an array to an other one
 * @str: the first array contain string
 * Return: return the value of malloc
 */

char *_strdup(char *str)
{
	char *str2;
	int i = 1;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
			i++;
	}

	str2 = malloc(sizeof(char) * i);

	if (str2 == NULL)
		return (NULL);

	while (str[j])
	{
		str2[j] = str[j];
		j++;
	}

	return (str2);
}
