#include "main.h"

/**
 * *_strncat - concatenates two string
 * @dest: string 1
 * @src: string 2
 * @n: bytes from src
 * Return: return the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
