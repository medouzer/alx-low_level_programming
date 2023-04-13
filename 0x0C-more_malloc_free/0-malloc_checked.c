#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: size of memory
 * Return: return a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
