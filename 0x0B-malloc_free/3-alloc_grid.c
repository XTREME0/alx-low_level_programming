#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 *@width: the width
 *@height: the height 
 * Return: pointer to int array
 *
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	array = (int **)malloc(height * width * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
