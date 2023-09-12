#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	float i;
	int j;

	i = ABS(12.67697798);
	j = ABS(0) * 10;
	printf("%f, %d\n", i, j);
	return (0);
}
