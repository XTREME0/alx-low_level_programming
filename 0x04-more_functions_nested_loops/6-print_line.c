#include "main.h"
/**
 * print_line - prints a line
 *
 *@n: number of '_' to print
 *
 * Return: Nothing
 *
 */
void print_line(int n)
{
	int quit = 0;

	if (n <= 0)
	{
		quit = 1;
	}

	while (n > 0 && quit == 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
