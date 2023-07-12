#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - return mem to Os
 * @grid: to be freed
 * @height: to be freed
 *
 * return: void function, no return
 **/

void free_grid(int **grid, int height)
{
	int j; /* iterator */

	for (j = 0; j < height; j++)
	{
		free(grid[j]); /* free memory*/
	}
	free(grid);
}
