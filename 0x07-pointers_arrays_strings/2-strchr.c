#include "main.h"

/**
 * *_strchr - locate a charatcter in a string
 * @s: is the string
 * @c: is the character
 * Return: return string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
