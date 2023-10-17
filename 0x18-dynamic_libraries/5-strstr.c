#include "main.h"
/**
 * _strstr - search a word on a string
 * @haystack: string
 * @needle: the word to search on the haystack
 * Return: return the word on string or null
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack)
	{
		while (needle[i] && haystack[i] == needle[i])
			i++;
		if (needle[i] == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}
