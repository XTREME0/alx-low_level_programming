#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *@argc: number of args
 *@argv: pointer to args
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int counter = 0;
	int coins[5] = {25, 10, 5, 2, 1};
	int i = 0;
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	while (num > 0)
	{
		while (num - coins[i] < 0)
		{
			i++;
		}
		num -= coins[i];
		counter++;
	}
	printf("%d\n", counter);


	return (0);
}
