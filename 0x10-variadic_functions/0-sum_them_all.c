#include "variadic_functions.h"
/**
 * sum_them_all - sum all parameters
 *@n: numbers
 * Return: the sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list p;
	int sum = 0;
	int i;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(p, int);
	}
	va_end(p);
	return (sum);
}
