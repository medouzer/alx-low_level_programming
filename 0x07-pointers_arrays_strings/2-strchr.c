#include "main.h"

/**
 * *_strchr - locate a charatcter in a string
 * @s: is the string
 * @c: is the character
 * Return: return string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
}
