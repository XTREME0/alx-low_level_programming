#include "main.h"
/**
 * print_to_98 - prints from n to 98
 *
 *@c: is the start
 * Return: nothing
 *
 */
void print_to_98(int c)
{
	int sw = 0;

	while (c <= 98)
	{
		if (c < 0)
		{
			c = -c;
			sw = 1;
			_putchar('-');
		}

		if ((c / 10) > 0)
		{
			_putchar('0' + (c / 10));
			_putchar('0' + (c % 10));
		} else
		{
			 _putchar('0' + c);
		}
		if (c != 98)
		{
			_putchar(',');
			_putchar(' ');
		} else
		{
			if (sw == 0)
			{
				_putchar('\n');
			}
		}
		if (sw == 0)
		{
			c++;
		} else
		{
			c--;
			c = -c;
			sw = 0;
		}
	}
}
