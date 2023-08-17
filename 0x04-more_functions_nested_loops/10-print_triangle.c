#include "main.h"
/**
 * print_triangle - prints a triangle
 *
 *@size: size of triangle
 *
 * Return: Nothing
 *
 */
void print_triangle(int size)
{
	int quit = 0;
	int sw = 0;
	int space = size - 1;
	int i = size;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		quit = 1;
	}

	while (i > 0 && quit == 0)
	{
		space = i - 1;
		for (j = 0; j < size; j++)
		{
			if (space > 0)
			{
				_putchar(' ');
				space--;
			} else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
		i--;
	}
}
