#include "main.h"

/**
 * *_strpbrk - fills memory
 * @s: string to get the result
 * @accept: is the string to search
 * Return: return the value of function
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return ('\0');
}
