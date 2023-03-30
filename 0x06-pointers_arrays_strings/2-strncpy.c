#include "main.h"

/**
 * *_strncpy - concatenates two string
 * @dest: string 1
 * @src: string 2
 * @n: number bytes src
 * Return: return the string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
