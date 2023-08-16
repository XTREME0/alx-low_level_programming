#include "main.h"

/**
 * printit - writes the character c using _putchar
 * @c: The character to print
 *
 * Return: On success 1.
 *
 */
void printit(int c)
{
	if ((c / 100) > 0)
	{
		_putchar('0' + (c / 100));
		_putchar('0' + ((c / 10) % 10));
		_putchar('0' + (c % 10));
	} else
	{
		if ((c / 10) > 0)
		{
			_putchar('0' + (c / 10));
			_putchar('0' + (c % 10));
		} else
		{
			 _putchar('0' + c);
		}
	}
}
/**
 * ft - foot
 *
 * @c: The character to print
 * @sw: switch
 * Return: nothing
 */
void ft(int c, int sw)
{

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
		if (c == 98 && sw == 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		c--;
		c = -c;
		sw = 0;
	}
}

/**
 * print_to_98 - writes numbers from n to 98
 * @c: where to start
 *
 * Return: nothing
 */
void print_to_98(int c)
{
	int sw = 0;

	while (c != 99)
	{
		while (c > 98)
		{
		printit(c);
		_putchar(',');
		_putchar(' ');
		c--;
		}
		if (c < 0)
		{
			c = -c;
			sw = 1;
			_putchar('-');
		}
		printit(c);
		ft(c, sw);
		if (sw == 0)
		{
			c++;
		} else
		{
			if (c == 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			c--;
			c = -c;
			sw = 0;
		}
	}
}
