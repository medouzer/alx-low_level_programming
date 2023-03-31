#include "main.h"

/**
 * *rot13 - encodes a string
 * @str: is the string to encodes
 * Return: return the string rot13
 */

char *rot13(char *str)
{
	int i, j;

	char sgo[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char srot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == sgo[j])
			{
				str[i] = srot13[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
