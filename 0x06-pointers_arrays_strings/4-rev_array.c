#include "main.h"
/**
 * reverse_array - reverse an array of numbers
 *
 *@a: is the array
 *@n: is the numbers of elements in the array
 * Return: nothing
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	for (i = 0; i <= (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}

}
