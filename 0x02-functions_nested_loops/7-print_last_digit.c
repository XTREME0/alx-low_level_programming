#include "main.h"
/**
 * print_last_digit - returns last digit of a number
 *
 *@c: is the number
 * Return: last digit of a number
 *
 */
int print_last_digit(int c)
{
	int last_digit = c % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
