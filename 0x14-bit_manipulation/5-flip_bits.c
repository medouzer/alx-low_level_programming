#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function return number of bit needded to flip to get
 * onther number
 * @n: in the number 1
 * @m: is the number 2
 * Return: return the number of bit fliped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp = n ^ m;
	unsigned int flip = 0;

	while (tmp)
	{
		tmp &= tmp - 1;
		flip++;
	}

	return (flip);
}
