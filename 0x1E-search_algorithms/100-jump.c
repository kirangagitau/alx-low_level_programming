#include <stdio.h>
#include <math.h>

int jump_search(int *array, size_t size, int value);

/**
 * jump_search - Function to perform Jump Search
 * @array: pointer to index of first array element
 * @size: length of array
 * @value: value to search for
 *
 *Return: index of value or -1
 **/

int jump_search(int *array, size_t size, int value)
{
	/* If the array is NULL or empty, return -1 */
	if (array == NULL || size == 0)
	return (-1);

	/* Calculate the jump step as the square root of the array size */
	size_t step = (size_t)sqrt(size);
	size_t prev = 0;
	size_t curr = step;

	/* Find the block where the value may be present */
	while (curr < size && array[curr - 1] < value)
		{
		prev = curr;
		curr += step;
		if (curr > size)
			{
			curr = size;
			}
		}

	/* Perform a linear search within the identified block */
	for (size_t i = prev; i < curr; i++)
		{
		if (array[i] == value)
			{
			return (i);
			}
		}
	/* If the value is not found, return -1 */
	return (-1);
}
