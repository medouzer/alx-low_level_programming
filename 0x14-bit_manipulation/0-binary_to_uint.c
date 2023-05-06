#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - function convert binary to unsigned int
 * @b: is the number on binary
 * Return: return the number converted
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int number = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		number = 2*number + (b[i] - '0');
		i++;
	}
	return (number);
}
