#include "main.h"

/**
 * is_palindrome - checks if a string is a plindrome
 *
 *@s: string to print
 * Return: 1 if palindrome 0 if not
 *
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_pl(s, 0, len));
}

/**
 * is_pl - checks if a string is a plindrome
 *
 *@s: string
 *@i: index
 *@len: size of the string
 * Return: 1 if palindrome 0 if not
 *
 */

int is_pl(char *s, int i, int len)
{
	if (i < (len / 2))
	{
		if (*(s + i) != *(s + len - 1 - i))
		{
			return (0);
		}
		return (is_pl(s, i + 1, len));
	}
	return (1);
}

