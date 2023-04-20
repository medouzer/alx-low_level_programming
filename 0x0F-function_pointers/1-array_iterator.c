#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function given as parameter
 * @array: is the array
 * @size: the size of the array
 * @action: the pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
