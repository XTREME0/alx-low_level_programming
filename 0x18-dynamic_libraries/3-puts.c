#include "main.h"
/**
 * _puts - prints a string
 *
 *@s: is the string
 *
 * Return: nothing
 *
 */
void _puts(char *s)
{
	int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
