#include "main.h"
/**
 * rot13 - 13 char shift
 *
 *@c: the string to convert
 *
 * Return: transformed char
 *
 */

char *rot13(char *c)
{
	int i = 0;
	char triggers[55] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char replace[55] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

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
