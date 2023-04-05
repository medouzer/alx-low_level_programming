#include "main.h"
/**
 * print_square - print square with #
 * @size: size of square
 */
void print_square(int size)
{
	int hei, wid;

	if (size > 0)
	{
		for (hei = 0; hei < size; hei++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (hei == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
