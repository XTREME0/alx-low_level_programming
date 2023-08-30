#include "main.h"

/**
 * _pow_recursion - returns x to the power of y
 *
 *@x: number x
 *@y: the power of x
 * Return: x to the power of y
 *
 */

int _pow_recursion(int x, int y)
{

	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	if (y == 0)
	{
		return (1);
	}
	return (-1);
}
