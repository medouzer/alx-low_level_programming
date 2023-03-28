#include "main.h"

/**
 * _puts - print string
 * @str: is the string to print
 */

void _puts(char *str)
{

	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
