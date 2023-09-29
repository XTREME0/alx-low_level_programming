#include "main.h"
#include <math.h>
/**
 * get_bit - get the bit in index
 *@n: the num
 *@index: the index
 * Return: the bit
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bt;

	if (index > 64)
		return (-1);

	bt = 1 << index;

	if ((n & bt) > 0)
		return (1);
	return (0);
}
