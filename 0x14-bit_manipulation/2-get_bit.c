#include "main.h"
#include <stdio.h>

/**
 * get_bit - function return the value of bit at index
 * @n: is the number
 * @index: is the index to use on the function
 * Return: return the value of the bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int lon = sizeof(unsigned long int) * 8;

	if (index >= lon)
		return (-1);

	return ((n >> index) & 1);
}
