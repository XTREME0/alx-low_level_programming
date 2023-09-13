#include <stdio.h>
/**
 * int_index - search for int
 *@array: the array
 *@cmp: pointer to fonction
 *@size: the size of array
 * Return: the index
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
