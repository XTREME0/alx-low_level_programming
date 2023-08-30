#include "main.h"

/**
 * is_prime_number - returns 1 if prime 0 if not
 *
 *@n: number
 * Return: 1 if prime 0 if not
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_pr(n, 2));
}

/**
 * _pr - prime
 *
 *@n: number
 *@c: attempts
 * Return: prime
 *
 */

int _pr(int n, int c)
{
	if (c >= n)
	{
		return (1);
	}
	if ((n % c) == 0)
	{
		return (0);
	}
	return (_pr(n, c + 1));
}
