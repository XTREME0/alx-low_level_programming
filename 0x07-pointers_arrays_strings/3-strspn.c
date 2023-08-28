#include "main.h"
#include <string.h>
/**
 *_strspn - gets the length of a prefix substring
 *
 *@accept: the char to look for
 *@s: the string
 * Return: the number of bytes in the initial segment of s which consist only of bytes from accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int n = strlen(s);

	while (*(s + i) == *(accept + i))
	{
		i++;
	}
	return (i);
}
