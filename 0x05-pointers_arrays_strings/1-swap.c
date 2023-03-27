#include "main.h"

/**
 * swap_int - swaps to values
 * @a: number 1
 * @b: number 2
 */

void swap_int(int *a, int *b)
{
	int c;

	c = a;
	a = b;
	b = c;
}
