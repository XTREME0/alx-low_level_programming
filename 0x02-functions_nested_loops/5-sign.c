#include "main.h"
/**
 * print_sign - checks sign of a number
 *
 *@c: is the number
 * Return: 1 if it is, 0 if it isn't
 *
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	if (c == 0)
	{
		_putchar('0');
		return (0);
	}
		_putchar('-');
		return (-1);
}
