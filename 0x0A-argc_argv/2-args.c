#include <stdio.h>

/**
 * main - Entry point
 *@argc: number of args
 *@argv: pointer to args
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x = argc;
	int i;

	for (i = 0; i < x; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
