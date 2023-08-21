#include "main.h"
/**
 * _strlen - returns length of a string
 *
 *@s: is the first int
 *
 * Return: len of s
 *
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * print_rev - prints reverse of a string
 *
 *@s: is the string
 *
 * Return: nothing
 *
 */
void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	for (; len >= 0; len--)
	{
		putchar(*(s + len));
	}
	printf("\n");
}
