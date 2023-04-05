#include "main.h"

/**
 * *_strstr - search world on string
 * @haystack: string to get the result
 * @needle: is the string to search
 * Return: return the value of function
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;
		haystack++;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return ('\0');
}
