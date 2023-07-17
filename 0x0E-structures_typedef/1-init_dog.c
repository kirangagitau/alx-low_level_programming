#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function initializing dog structure
 * @d: tag name
 * @name: name of the dog
 * @age: dog's age
 * @owner: person who owns the dog.
 *
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
