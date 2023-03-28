#include "main.h"

/**
 * print_rev - print string reverse
 * @s: string
 */

void print_rev(char *s)
{
	int i;
	int len = 0;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
