#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 12 10 times
 *
 *
 * Return: Nothing
 *
 */
void more_numbers(void)
{
	int i = 0;
	int counter = 0;

	while (counter < 10)
	{
		while (i <= 12)
		{
			if ((i / 10) != 0)
			{
				_putchar('0' + (i / 10));
				_putchar('0' + (i % 10));
			} else
			{
				_putchar('0' + i);
			i++;
			}
		}
		_putchar('\n');
		counter++;
	}
}
