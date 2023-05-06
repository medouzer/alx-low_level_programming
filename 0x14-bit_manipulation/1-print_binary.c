#include "main.h"
#include <stdio.h>

/**
 * print_binary - function convert from binary to number
 * @n: the binary to convert
 */

void print_binary(unsigned long int n)
{
	unsigned long int cur;
	if (n == 0 || n == 1)
		putchar(n);
	cur = n;
	if (cur > 1)
		print_binary(cur >> 1);

	putchar((cur & 1) + '0');
}
