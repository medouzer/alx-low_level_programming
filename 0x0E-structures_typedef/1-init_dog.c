#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function to intialize the struct dog
 * @d: is the pointer d of the struct dog
 * @name: is the of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
