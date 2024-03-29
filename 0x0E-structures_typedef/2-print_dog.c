#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints values os dog struct
 * @d: the tag name to dog struct
 **/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s", d->owner);
}
