#include "main.h"
#include <stdio.h>
/**
 * multiples - lists multiples of 3 and 5 bellow 1024
 *
 * Return: 0 success
 *
 */
int multiples(void)
{
	int sum = 0;
	int i = 1024;

	while (i > 0)
	{
		if ((i % 3) == 0)
		{
			sum = sum + i;
		}
		if ((i % 5) == 0)
		{
			sum = sum + i;
		}
		i--;
	}
	printf("%d\n", sum);
	return (0);
}
