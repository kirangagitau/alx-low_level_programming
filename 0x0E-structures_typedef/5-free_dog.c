#include <stdio.h>
#include "dog.h"

/**
 * free_dog - fun to free memory
 * @d: mem to free
 **/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d)
	}
}
