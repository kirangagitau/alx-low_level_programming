#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - func rtn ptr to 2D array
 * @width: first dimention
 * @height: second dimention
 *
 * Return: ptr
 **/

int **alloc_grid(int width, int height)
{
	int **rtn; /* pointer to return*/
	int i, j; /* iterators */

	if (width < 1 || height < 1) /* w or h should be 0 or  -tive */
		return (NULL);
	rtn = malloc(sizeof(int *) * height);
	if (rtn == NULL)
		return (NULL);
	for (i = 0; i < height; i++) /* iterating for height */
	{
		rtn[i] = malloc(sizeof(int) * width);
		if (rtn[i] == NULL)
		{
			for (; i >= 0; i--)
				free(rtn[i]); /* return mem to Operating System*/
			free(rtn);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			rtn[i][j] = 0;
	}
	return (rtn); /* return ptr */
}
