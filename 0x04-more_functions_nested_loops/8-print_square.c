#include "main.h"
/**
 * print_square - prints a square
 *
 *@size: size of square
 *
 * Return: Nothing
 *
 */
void print_square(int size)
{
	int quit = 0;
	int i = size;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		quit = 1;
	}

	while (i > 0 && quit == 0)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		i--;
	}
}
