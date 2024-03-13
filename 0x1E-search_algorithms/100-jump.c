#include "search_algos.h"

/**
 * jump_search - Search for an int using jump search
 *@array: the array
 *@size: size fo the array
 *@value: the value
 * Return: index of value else return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int stp, sqr, b;

	if (array == NULL || size == 0)
		return (-1);
	b = 0;
	sqr = sqrt(size);
	stp = 0;

	for (; stp < (int)size && array[stp] < value;)
	{
		printf("Value checked array[%d] = [%d]\n", stp, array[stp]);
		b = stp;
		stp += sqr;
	}

	printf("Value found between indexes [%d] and [%d]\n", b, stp);

	for (; b < stp && array[b] < value && stp < (int)size; b++)
	{
		printf("Value checked array[%d] = [%d]\n", b, array[b]);
	}
	printf("Value checked array[%d] = [%d]\n", b, array[b]);
	if (array[b] == value)
		return (b);
	return (-1);
}
