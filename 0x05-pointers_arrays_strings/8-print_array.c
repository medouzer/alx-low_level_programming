#include "main.h"

/**
 * print_array - print the array
 * @a: is the array
 * @n: the number of element array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n-1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
}
