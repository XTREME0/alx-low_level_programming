#include "main.h"
#include <math.h>
/**
 * binary_to_uint - convert dec to bin
 *@n: the num
 * Return: int
 *
 */
void print_binary(unsigned long int n)
{
	int i;
	char b;
	unsigned long int size = sizeof(unsigned long int) * 8;
	int lz = 1;

	for (i = size - 1; i >= 0; i--)
	{
		b = (n & (1ul << i)) ? '1' : '0';
		if (b == '1')
			lz = 0;
		if (lz == 0)
			_putchar(b);
	}
	if (lz == 1)
		_putchar('0');
}
