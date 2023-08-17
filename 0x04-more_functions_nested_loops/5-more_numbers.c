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
	char c[5];
	int x;

	while (counter < 10)
	{
		while (i <= 14)
		{
			if ((i / 10) != 0)
			{
				c[0] = (i / 10);
				c[1] = (i % 10);
				c[2] = 'x';
			} else
			{
				c[0] = i;
				c[1] = 'x';
			}
			for (x = 0; c[x] != 'x'; x++)
			{
				_putchar('0' + c[x]);
			}
			i++;
		}
		_putchar('\n');
		i = 0;
		counter++;
	}
}
