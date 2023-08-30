#include "main.h"

/**
 * factorial - prints the factorial
 *
 *@n: number to use
 * Return: factorial, or -1 if n < 0
 *
 */

int factorial(int n)
{

	if (n > 0)
	{
		return (n * factorial(n - 1));
	} else
	{
		if (n == 0)
		{
			return (1);
		}
	}
	return (-1);
}
