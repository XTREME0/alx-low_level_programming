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
	int b, e, sqr;

	if (array == NULL || size == 0)
		return (-1);
	b = 0;
	sqr = sqrt(size);
	e = sqr;

	while (array[(int) fmin(e, (int) size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", b, array[b]);
		b = e;
		e += sqr;
		if (b >= (int) size)
			return (-1);
	}

	printf("Value found between indexes [%d] and [%d]\n", b, e);

	while (array[b] < value)
	{
		printf("Value checked array[%d] = [%d]\n", b, array[b]);
		b += 1;
		if (b == fmin(e, (int) size))
			return (-1);
	}
	if (array[b] == value)
		return (b);
	return (-1);
}
