#include <stdio.h>

/**
 * main - print alphabet in lowercase
 * Return: return 0
 */

int main(void)
{
	int n;
	int p;
	int g;

	for (n = 0; n <= 9; n++)
	{
		for (p = n + 1; p <= 9; p++)
		{
			for (g = p + 1; g <= 9; g++)
			{
				putchar('0' + n);
				putchar('0' + p);
				putchar('0' + g);
				if (n != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
