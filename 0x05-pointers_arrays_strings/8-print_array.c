#include "main.h"
/**
 * print_array - prints an array
 *
 *@a: is the array
 *@n: number to print
 * Return: nothing
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}

	}
	printf("\n");
}
