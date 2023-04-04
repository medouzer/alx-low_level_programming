#include "main.h"

/**
 * *_memset - fills memory
 * @n: bytes
 * @s: pointer of n
 * @b: constant byte b
 * Return: return the value of function
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n - 1; i++)
	{
		s[i] = b;
	}

	return (s);
}
