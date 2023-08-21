#include "main.h"
#include <string.h>
#include <stdlib.h>
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
 * rev_string - reverse a string
 *
 *@s: is the string
 *
 * Return: nothing
 *
 */
void rev_string(char *s)
{
	int i = 0;
	int len = _strlen(s) - 1;
	char *str = (char *)malloc(len + 2);

	for (; len >= 0; len--, i++)
	{
		str[i] = *(s + len);
	}
	strcpy(s, str);
	free(str);
}
