#include <stdio.h>

/**
 * main - print alphabet in lowercase
 * Return: return 0
 */

int main(void)
{
	int n;
	int p;
	int g = 1;

	for (n = 0; n <= 9; n++)
	{
		for (p = g; p <= 9; p++)
		{
			putchar('0' + n);
			putchar('0' + p);
			putchar(',');
			putchar(' ');
		}
		g++;
	}

	putchar('\n');

	return (0);
}
