#include "main.h"

/**
 * *string_toupper - switch string from lower to upper
 * @str: is the string
 * Return: return the string str upper
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
