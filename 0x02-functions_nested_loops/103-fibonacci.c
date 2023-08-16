#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (SUCCESS)
 *
 */
int main(void)
{
	long x;
	long y = 0;
	long z = 1;
	long sum = 0;

	while (z <= 4000000)
	{
		x = y;
		y = z;
		z = x + y;
		if (z % 2 == 0 && z <= 4000000)
		{
			sum = sum + z;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
