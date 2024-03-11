#include "search_algos.h"

/**
 * linear_search - Search for an int using linear search
 *@array: the array
 *@size: size fo the array
 *@value: the value
 * Return: index of value else return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
