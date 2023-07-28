#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - for prints @ array
 * @array: array to be printed
 * @size: array size
 * @action: pointer to print
 *
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i; /* the count iterator */

	if (array == NULL || action == NULL) /* no array size no funtion given*/
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
