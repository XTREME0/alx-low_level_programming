#include "main.h"
#include <string.h>
/**
 * print_diagsums - prints sums of diagonals of a matrix
 *
 *@a: matrix
 *@size: size of the matrix
 * Return: nothing
 *
 */
void print_diagsums(int *a, int size)
{
	 int i;
	 int sumx = 0;
	 int sumy = 0;

	for (i = 0; i < size; i++)
	{
		sumx += a[i * size + i];
		sumy += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sumx, sumy);
}
