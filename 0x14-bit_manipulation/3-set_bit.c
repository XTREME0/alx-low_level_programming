#include "main.h"
#include <math.h>
/**
 * set_bit - set the bit in index
 *@n: the num
 *@index: the index
 * Return: 1 if worked, -1 if not
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = 1 << index | *n;

	return (1);
}
