#include "dog.h"
#include <stdio.h>

/**
 * free_dog - fun to free memory
 * @d: mem to free
 **/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
