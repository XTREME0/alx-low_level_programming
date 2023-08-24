#include "main.h"
/**
 * leet - changes enerything to leet speak
 *
 *@c: the string to convert
 *
 * Return: transformed char
 *
 */
char *leet(char *c)
{
	int i = 0;
	char triggers[10] = "aeotlAEOTL";
	char replace[10] = "4307143071";

	while (c[i] != '\0')
	{
		if (strchr(triggers, c[i]) != NULL)
		{
			char *found = strchr(triggers, c[i]);

			c[i] = replace[found - triggers];
		}
		i++;
	}
	return (c);
}
