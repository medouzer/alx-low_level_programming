#include "main.h"

/**
 * *_reverse_array - concatenates two string
 * @a: array to reverse
 * @n: number of elements if the array
 * Return: return the string dest
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < (n-1); i++)
	{
		c = a[i];
		a[i] = a[n];
		a[n] = c;
		n--;
	}
}
