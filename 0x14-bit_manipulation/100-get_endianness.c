#include "main.h"
#include <stdio.h>

/**
 * get_endianness - is the function that check endianness
 * Return: return 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	int number;

	number = 1;

	if (*(char *)&number)
		return (1);

	return (0);
}
