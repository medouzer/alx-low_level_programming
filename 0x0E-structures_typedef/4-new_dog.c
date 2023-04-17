#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - the pointer of the dog_t
 * @name: name of the dog
 * @float: age of the dog
 * @owner: name of the owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_pt;
	dog_pt = malloc(sizeof(dog_t));

	if (dog_pt == NULL)
		return (NULL);

	dog_pt->name = name;
	dog_pt->age = age;
	dog_pt->owner = owner;

	return (dog_pt);
}
