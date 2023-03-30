#include "main.h"

/**
 * *_stract - concatenates two string
 * @dest: string 1
 * @src: string 2
 * Return: return the string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
