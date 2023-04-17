#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function to free a struct call dog
 * @d: the pointer of dog_t
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{	
		free(d->name);
		free(d->owner);
		free(d);
	}
}
