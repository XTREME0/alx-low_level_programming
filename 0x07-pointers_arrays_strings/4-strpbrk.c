#include "main.h"
#include <string.h>
/**
 *_strpbrk - locates the first occurrence in the string s
 *
 *@accept: the char to look for
 *@s: the string
 * Return: the number of bytes in the initial segment of s
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0' ; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				return (s + i);
			}
		}
	}
	return (0);
}
