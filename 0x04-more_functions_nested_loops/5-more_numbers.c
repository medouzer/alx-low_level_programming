#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 multipltimes
 */

void more_numbers(void)
{
	int i = 0;
	int n;

	while (i <= 9)
	{
		n = 0;
		while (n <= 14)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			n++;
		}
		_putchar('\n');
		i++;
	}
}
