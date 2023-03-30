#include "main.h"

/**
 * *_strcat - concatenates two string
 * @dest: string 1
 * @src: string 2
 * Return: return the string dest
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
