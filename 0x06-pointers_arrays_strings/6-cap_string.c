#include "main.h"
#include <string.h>
/**
 * cap_string - capitalize a string
 *
 *@c: the string to convert
 *
 * Return: transformed char
 *
 */
char *cap_string(char *c);
{
	int i = 0;
	int tmp;
	char triggers[15] = ",;.!?\"(){}\n";

	while (c[i] != '\0')
	{
		if (strchr(triggers, array[i - 1]) != NULL)
		{
			if ((int)c[i] >= 97 && (int)c[i] <= 122)
			{
				tmp = (int)c[i] - 32;
				c[i] = (char)tmp;
			}
		}
		i++;
	}
	return (c);
}
