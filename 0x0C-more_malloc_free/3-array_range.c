#include "main.h"
#include <stdlib.h>

/**
 * array_range - create a range array
 * @min: is the min of integers
 * @max: is the max of integers
 * Return: return pointer or NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < max; i++)
		ptr[i] = min++;

	return (ptr);
}
