#include "main.h"

/**
 * array_range - creates an array of integers
 *
 *@min: min value
 *@max: max value
 *Return: Returns a pointer to the created array
 *
 */

int *array_range(int min, int max)
{
	int *array;
	int i, j;
	int range = max - min + 2;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(range * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = min, j = 0; i <= max; i++, j++)
	{
		*(array + j) = i;
	}
	*(array + j) = '\0';
	return (array);
}
