#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* **alloc_grid - a pointer to a 2 dimensional array of integers
* @width: first integer
* @height: second integer
* Return:  a pointer to a 2 dimensional array
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0)
	return (NULL);

	if (height <= 0)
	return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			free(grid[j]);
			free(grid);
		}
	}
	return (grid);
}
