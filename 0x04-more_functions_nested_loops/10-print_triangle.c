#include "main.h"
/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int dyz, index;

	if (size > 0)
	{
		for (dyz = 1; dyz <= size; dyz++)
		{
			for (index = size - dyz; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < dyz; index++)
				_putchar('#');

			if (dyz == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
