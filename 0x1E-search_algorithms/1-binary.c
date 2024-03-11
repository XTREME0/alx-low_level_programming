#include "search_algos.h"

/**
 * print_array - print an array
 *@array: the array
 *@b: beginning
 *@e: end
 * Return: Nothing
 */
void print_array(int *array, int b, int e)
{
	printf("Searching in array:");
	for (; b <= e; b++)
	{
		printf(" %d", array[b]);
		if (b != e)
			printf(",");
	}
	printf("\n");
}

/**
 * binary_search - Search for an int using binary search
 *@array: the array
 *@size: size fo the array
 *@value: the value
 * Return: index of value else return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int b, e, m;

	if (array == NULL || size == 0)
		return (-1);
	b = 0;
	e = size - 1;
	while (b <= e)
	{
		m = (int) ((e + b) / 2);
		print_array(array, b, e);
		if (value < array[m])
		{
			e = m - 1;
		} else if (value > array[m])
		{
			b = m + 1;
		} else
		{
			return (m);
		}
	}
	return (-1);
}
