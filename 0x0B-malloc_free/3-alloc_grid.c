#include"main.h"

/**
 * alloc_grid - allocating memory for a 2d array
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to the allocated grid
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **b;

	if (width <= 0 || height <= 0)
		return (NULL);

	b = malloc(height * sizeof(int *));
	if (b == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		b[i] = malloc(width * sizeof(int));
		if (b[i] == NULL)
		{
			for (j = 1; j >= 0; j--)
				free(b[j]);
			free(b);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			b[k][l] = 0;
	}
	return (b);
}
