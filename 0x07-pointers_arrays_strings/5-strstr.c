#include "main.h"
#include <string.h>
/**
 *_strstr - locates the first occurrence of str needle in str haystack
 *
 *@needle: the str to look for
 *@haystack: the string to look in
 * Return: a pointer to the beginning of the located substring, or NULL
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (k = i, j = 0; *(needle + j) == *(haystack + k) ; j++, k++)
		{
			if (*(needle + j + 1) == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
