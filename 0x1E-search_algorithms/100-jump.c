#include "search_algos.h"
#include <maths.h>

/**
 * int jump_search - implement jump search algorithm
 * @array: pointer to first index of array
 * @size: length/size of the array
 * @value: value to search for
 *
 * Description: This function searches for a value in a sorted
 * array of integers using the jump search algorithm and
 * returns the index of the value or -1 if value
 * is not found or if array is Null
 * Return: index of value or -1
 **/

int jump_search(int *array, size_t size, int value)
{
	int index, m, k, prev;

	if (size == 0 || array == NULL)
		return (-1);
	m = (int)sqrt((double)size);
	k = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * m;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
