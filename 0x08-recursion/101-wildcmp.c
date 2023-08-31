#include "main.h"

/**
 * wildcmp - compares twi strings
 *
 *@s1: string 1
 *@s2: string 2
 * Return: 1 if the same 0 if not
 *
 */

int wildcmp(char *s1, char *s2)
{
	if (strlen(s1) != strlen(s2))
	{
		return (0);
	}
	if (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			return (0);
		}
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (1);
}
