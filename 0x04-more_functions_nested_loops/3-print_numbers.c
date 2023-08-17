#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 *
 *
 * Return: Nothing
 *
 */
void print_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar("\n");
}
