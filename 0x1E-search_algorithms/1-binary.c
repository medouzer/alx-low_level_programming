#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	int mid;
	int i, j;
	int k;

	i = 0;
	j = size - 1;
	while (i <= j)
	{
		printf("Searching in array: ");
		k = i;
		while (k < (j - i) + 1)
		{
			printf("%d", array[k]);
			if (k != (j - i))
				printf(", ");
			else
				printf("\n");
			k++;
		}
	mid = (j + i) / 2;
	if (value == array[mid])
		return (mid);
	else if (value > array[mid])
		i = mid + 1;
	else if (value < array[mid])
		j = mid - 1;
	}
	return (-1);
}
