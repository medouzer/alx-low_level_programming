#include "main.h"

/**
 * *_strcpy - copy the array into onther one
 * @dest: an array
 * @src: an array
 * Return: return the last array
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
