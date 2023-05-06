#include "main.h"
#include <stdio.h>

/**
 * print_binary - function convert from binary to number
 * @n: the binary to convert
 */

void print_binary(unsigned long int n)
{
	unsigned long int cur;
	int len = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	cur = n;
	while ((cur >>= 1) > 0)
		len++;

	while (len >= 0)
	{
		if ((n >> len ) & 1)
			putchar('1');
		else
			putchar('0');

		len--;
	}
}
