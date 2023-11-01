#include "main.h"

/**
 *free_grid- main function
 *@grid: function parameter
 *@height: function parametr
 *Return :0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

