#include"main.h"

/**
 * alloc_grid - allocate memory to a 2D grid
 * @width: rows
 * @height: columns
 * Return: pointer to grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int wid, hei, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (hei = 0; hei < height; hei++)
	{
		grid[hei] = malloc(sizeof(int) * width);
		if (grid[hei] == NULL)
		{
			for (i = 0; i < hei; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (wid = 0; wid <= hei; wid++)
		{
			grid[hei][wid] = 0;
		}
	}
	return (grid);
}
