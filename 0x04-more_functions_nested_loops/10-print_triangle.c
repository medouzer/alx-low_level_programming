#include "main.h"
/**
 * print_triangle - print triangle with #
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int dyz, i;

	if (size > 0)
	{
		for (dyz = 1; dyz <= size; dyz++)
		{
			for (i = size - dyz; i > 0; i--)
				_putchar(' ');

			for (i = 0; i < dyz; i++)
				_putchar('#');

			if (dyz == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
