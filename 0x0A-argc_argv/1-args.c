#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *@argc: number of args
 *@argv: pointer to args
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char hh[100];

	strcpy(hh, *argv);
	printf("%d\n", argc);
	return (0);
}
