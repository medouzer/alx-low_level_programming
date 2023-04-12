#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the string 1
 * @s2: the string 2
 * Return: return the array with two string
 */

char *str_concat(char *s1, char *s2)
{
	char *constr;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	
	while (s2[j] != '\0')
		j++;

	constr = malloc (sizeof(char) * (i + j + 1));

	if (constr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (k < i)
		{
			constr[k] = s1[k];
			k++;
		}
		k = 0;
		while (k < j)
		{
			constr[k + i] = s2[k];
			k++;
		}
	}
	constr[i + j] = '\0';

	return (constr);
}
