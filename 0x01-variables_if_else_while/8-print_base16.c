#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char a[] = "0123456789abcdef\n";

	while (a[i] != '\0')
	{
		putchar(a[i]);
		i += 1;
	}
	return (0);
}