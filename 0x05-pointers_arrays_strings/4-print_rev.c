#include "main.h"

/**
 * print_rev - print string in revers
 * @s: is the string
 */

void print_rev(char *s)
{
	int len, i;

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
