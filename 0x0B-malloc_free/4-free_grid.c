#include "main.h"
#include <stdlib.h>
/**
 * free_grid - that frees a 2 dimensional grid
 *
 * @grid: grid to be free'd
 *
 * @height: rows for the array
 *
 * no return
 *
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
