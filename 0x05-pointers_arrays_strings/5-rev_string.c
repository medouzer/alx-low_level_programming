#include "main.h"

/**
 * rev_string - reverse the dtring
 * @s: string
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char revs;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= len / 2; i--)
	{
		revs = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = revs;
	}
}
