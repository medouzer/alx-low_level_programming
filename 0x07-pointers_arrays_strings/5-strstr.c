#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: string to be searched.
 * @needle: substring to be located.
 *
 * Return: return string or null
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i] && haystack[i] == needle[i]; i++)
		{
			/*do nothing*/
		}
		if (needle[i] == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}
