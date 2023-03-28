#include "main.h"

/**
 * rev_string - reverse the dtring
 * @s: string
 */

void rev_string(char *s)
{
	int len = 0;
	int i, j;
	char revs[];

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		for (j = 0; j < len; j++)
		{
			revs[j] = s[i];
		}
	}
}
