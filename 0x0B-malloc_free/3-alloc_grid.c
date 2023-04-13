#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer of 2 dimensional
 * @width: the width of the array
 * @height: the height of the array
 * Return: return the array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arraygr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arraygr = malloc(height * sizeof(int *));

	if (arraygr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arraygr[i] = malloc(width * sizeof(int));

		if (arraygr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arraygr[j]);
			free(arraygr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			arraygr[i][j] = 0;
		}
	}

	return (arraygr);
}
