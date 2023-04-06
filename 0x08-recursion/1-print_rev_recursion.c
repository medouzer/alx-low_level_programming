#include "main.h"

/**
 * _print_rev_recursion - reverse a string with recursion
 * @s: is the string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
