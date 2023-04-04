#include "main.h"

/**
 * *_memcpy - copies memory area
 * @n: bytes from memory area
 * @src: memory area
 * @dest: memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n-1; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
