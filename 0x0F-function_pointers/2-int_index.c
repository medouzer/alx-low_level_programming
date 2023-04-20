#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searche for integer
 * @array: is the array stored numbers
 * @size: is the size of the array
 * @cmp: pointer of the function
 * Return: return the value i or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
