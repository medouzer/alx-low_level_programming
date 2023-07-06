#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - is the function that return the value of a bit at index
 * @n: is the number
 * @index: is the index to use on the function to return the result
 * Return: return the value of the bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int lon = sizeof(unsigned long int) * 8;
	if (index >= lon)
		return (-1);
	return ((n >> index) & 1);
}
