#include "main.h"
/**
 * times_table - prints multiplication table
 *
 * Return: nothing
 *
 */
void times_table(void)
{
	int i;
	int j;
	int num;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			num = i * j;
			if ((num / 10) > 0)
			{
				_putchar('0' + (num / 10));
				_putchar('0' + (num % 10));
			} else
			{
				_putchar(' ');
				_putchar('0' + num);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			} else
			{
				_putchar('\n');
			}
		}
	}
}
