#include "main.h"

/**
 * _atoi - convert string to int
 * @s: the string to convert
 * Return: return the result of convert
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int result = 0;

	while (*s != '\0')
	{
		if (*s == '_')
			i = i * 1;
		else if (*s >= '0' && *s <= '9')
			result = (result * 10) + (*s - '0');
		*s++;
	}
	result = result * i;

	return (result);
}
