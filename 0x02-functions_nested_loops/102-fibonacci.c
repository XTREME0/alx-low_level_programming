#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (SUCCESS)
 *
 */
int main(void)
{
	int counter = 0;
	long x;
	long y = 0;
	long z = 1;

	while (counter < 50)
	{
		x = y;
		y = z;
		z = x + y;
		printf("%ld, ", z);
		counter++;
	}
	printf("\n");
	return (0);
}
