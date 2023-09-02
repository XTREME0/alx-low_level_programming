#include "main.h"
/**
 * _abs - returns absolute value of a number
 *
 *@c: is the number
 * Return: absolute value
 *
 */
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	if (c == 0)
	{
		return (0);
	}
		return (-c);
}
