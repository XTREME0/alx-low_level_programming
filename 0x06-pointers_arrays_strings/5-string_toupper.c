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

	while (c[i] != '\0')
	{
		if ((int)c[i] >= 97 && (int)c[i] <= 122)
		{
			(int)c[i] -= 32;
		}
		i++;
	}
	return (c);
}
