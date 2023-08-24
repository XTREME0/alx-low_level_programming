#include "main.h"
/**
 * string_toupper - changes enerything to uppercase
 *
 *@c: the string to convert
 *
 * Return: transformed char
 *
 */
char *string_toupper(char *c)
{
	int i = 0;
	int tmp;

	while (c[i] != '\0')
	{
		if ((int)c[i] >= 97 && (int)c[i] <= 122)
		{
			tmp = (int)c[i] - 32;
			c[i] = (char)tmp;
		}
		i++;
	}
	return (c);
}
