#include "main.h"
#include <math.h>
/**
 * binary_to_uint - convert from binary ti decimal
 *@b: the binary
 * Return: int
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	if (b == NULL)
		return (0);

	for (num = 0; *b != '\0'; b++)
	{
		if (*b == '1')
		{
			num = num << 1;
			num++;
		} else if (*b == '0')
		{
			num = num << 1;
		} else
		{
			return (0);
		}
	}
	return (num);
}
