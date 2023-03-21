#include "main.h"

/**
 * print_alphabet - print hte alphabet in lowercase
 * Return: return the value 0
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
