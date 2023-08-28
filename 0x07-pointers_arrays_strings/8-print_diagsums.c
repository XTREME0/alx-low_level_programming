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
	 int j;
	 int sumx = 0;
	 int sumw = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sumx += a[i][j];
			}
		}
	}


	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i + j == size - 1)
			{
				sumy += a[i][j];
			}
		}
	}
	printf("%d, %d", sumx, sumy);
}
