#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - is the function thatreplace a bit with 1 at index
 * @n: is the pointer of the number
 * @index: is the index where we make change
 * Return: 1 if worked or -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int lon = sizeof(unsigned long int) * 8;

	if (index >= lon)
		return (-1);
	*n |= (1 << index);
	return (1);
}
