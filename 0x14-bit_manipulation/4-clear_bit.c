#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function that sets a bit to 0 at index
 * @n: is the pointer of the number
 * @index: is the index
 * Return: 1 if worked or -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int lon = sizeof(unsigned long int) * 8;

	if (index >= lon)
		return (-1);
	*n &= -(1 << index);
	return (1);
}
