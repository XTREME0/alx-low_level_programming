#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 * Return: 0 on success
 *
 */
void print_alphabet_x10(void)
{
	int i;
	int counter;

	for (counter = 0; counter < 10; counter++)
	{

		for (i = 97; i <= 122; i++)
		{
			_putchar((char)i);
		}
		_putchar('\n');
	}
}
