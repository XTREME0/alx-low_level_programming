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
	int i = 0;
	int j = 0;
	int counter = 0;
	int quit = 0;
	int found = 0;
	int sw = 0;

	for (i = 0; *(s + i) != '\0' && quit == 0; i++)
	{
		for (j = 0; *(accept + j) != '\0' ; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				sw = 1;
				counter++;
				found = 1;
			}
		}
		if (sw == 1 && found == 0)
		{
			return (counter);
		}
		found = 0;

	}
	return (0);
}
