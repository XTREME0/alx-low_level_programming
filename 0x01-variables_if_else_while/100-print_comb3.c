#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i != 7 || j != 8)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
		}
	putchar('\n');
	return (0);
}
