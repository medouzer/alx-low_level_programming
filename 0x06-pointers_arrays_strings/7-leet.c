#include "main.h"

/**
 * *leet - concatenates two string
 * @str: string 1
 * Return: return the str final
 */

char *leet(char *str)
{
	int i = 0;
	int j;
	char s1[] = "aeotlAEOTL";
	char s2[] = "4307143071";

	while (str[i] != '\0')
	{
		for (j = '0'; j < 10; j++)
		{
			if (str[i] == s1[j])
				str[i] = s2[j];
		}
		i++;
	}
	return (str);
}
