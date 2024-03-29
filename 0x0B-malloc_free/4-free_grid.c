#include "main.h"

/**
 * free_grid -  frees a 2 dimensional grid previously
 * @grid: the integer
 * @height: the integer
 * Return: Always 0 (Sucess)
 *
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
	}
	free(grid);
}
