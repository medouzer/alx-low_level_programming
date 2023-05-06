#include "main.h"
#include <stdio.h>

/**
 * print_binary - function convert from binary to number
 * @n: the binary to convert
 */

void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
		putchar(n);
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}
