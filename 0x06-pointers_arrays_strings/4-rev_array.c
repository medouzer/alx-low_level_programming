#include "main.h"

/**
 * reverse_array - reverse array
 * @a: array to reverse
 * @n: number of elements if the array
 * Return: return the string dest
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < n--; i++)
	{
		c = a[i];
		a[i] = a[n];
		a[n] = c;
	}
}
