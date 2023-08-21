#include "main.h"
/**
 * swap_int - swaps values of two ints a and b
 *
 *@a: is the first int
 *@b: second int
 * Return: nothing
 *
 */
void swap_int(int *a, int *b)
{
	int s = a;

	*a = *b;
	*b = s;
}
