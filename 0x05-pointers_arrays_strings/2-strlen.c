#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: char
 * Return: return the value
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		s++;
		counter++;
	}
	return (counter);
}
