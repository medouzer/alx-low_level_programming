#include "main.h"

/**
 * _strlen_recursion - length of a string
 * @s: is the string
 * Return: return the length
 */

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
	{
		return (0);
	}
	else
		i = i + _strlen_recursion(s + 1);

	return (i);
}
