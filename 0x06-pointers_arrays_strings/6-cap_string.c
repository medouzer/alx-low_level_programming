#include "main.h"

/**
 * *cap_string - capitalizes all words of string
 * @str: is the  world
 * Return: return the value
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;

		if (i == 0 || str[i - 1] == ' ' ||
		str[i - 1] == '\t' || str[i - 1] == '\n' ||
		str[i - 1] == ',' || str[i - 1] == ';' ||
		str[i - 1] == '!' || str[i - 1] == '?' ||
		str[i - 1] == '"' || str[i - 1] == '(' ||
		str[i - 1] == ')' || str[i - 1] == '{' ||
		str[i - 1] == '}' || str[i - 1] == '.')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
