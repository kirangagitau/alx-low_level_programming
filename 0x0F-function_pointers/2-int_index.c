#include "function_pointers.h"

/**
 * int_index - return index place for true comparison else -1
 * @array: the array to be given
 * @size: number of the array elements
 * @cmp: pointer to func 3 in main
 *
 * Return: return value of the function
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i; /* count iterator */

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);/*Return*/

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i); /*return index of array*/
	}
	return (-1);
}
