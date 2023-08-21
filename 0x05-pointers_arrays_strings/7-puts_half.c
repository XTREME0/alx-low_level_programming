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
 * puts_half - prints half of a string
 *
 *@str: is the string
 *
 * Return: nothing
 *
 */
void puts_half(char *str)
{
	int end = _strlen(str);
	int start;

	if ((end % 2) != 0)
	{
		end--;
	}
	for (start = (end / 2); start <= end; start++)
	{
		putchar(*(str + start));
	}
	printf("\n");
}
