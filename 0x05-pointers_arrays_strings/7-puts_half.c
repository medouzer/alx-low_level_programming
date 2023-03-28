#include "main.h"

/**
 * puts_half - puts the half of string
 * @str: the string
 */

void puts_half(char *str)
{
	int len, i, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (i = n; i <= len; i++)
		-putchar(str[i]);

	_putchar('\n');
}
