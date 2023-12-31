#include "main.h"
#include <string.h>
/**
 *_strchr - locates a character in a string
 *
 *@c: the char to look for
 *@s: the string
 * Return: the pointer to first occurence of c or NULL if not found
 *
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	unsigned int n = strlen(s);

	for (i = 0; i < n - 1; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
