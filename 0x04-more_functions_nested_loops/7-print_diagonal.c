#include "main.h"
/**
 * print_diagonal - prints a diagonal
 *
 *@n: number of '\' to print
 *
 * Return: Nothing
 *
 */
void print_diagonal(int n)
{
	int quit = 0;
	int space = 0;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		quit = 1;
	}

	while (n > 0 && quit == 0)
	{
		for (i = space; i > 0; i--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		space++;
		n--;
	}
}
