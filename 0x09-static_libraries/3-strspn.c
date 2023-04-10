#include "main.h"

/**
 * _strspn - the length of a prefix substring
 * @s: the string
 * @accept: the prifix
 * Return: return the number
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (j);
		}
		s++;
	}

	return (j);
}
