#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of memory s2 that we use
 * Return: return pionter contain 2 string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int l1 = 0, l2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	if (n >= l2)
		str = malloc(sizeof(char) * (l1 + l2 + 1));
	else
		str = malloc(sizeof(char) * (l1 + n + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		str[i] = s1[i];
	if (n < l2)
	{
		for (j = 0; j < n; j++)
			str[i++] = s2[j];
	}
	else
	{
		for (j = 0; j < l2; j++)
			str[i++] = s2[j];
	}

	str[i] = '\0';

	return (str);
}
