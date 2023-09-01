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

	x++;
	printf("%s\n", argv[0]);
	return (0);
}
