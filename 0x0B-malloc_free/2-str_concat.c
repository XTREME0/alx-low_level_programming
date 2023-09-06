#include "main.h"

/**
 * str_concat - returns a pointer to a str which is s1 and s2
 *
 *@s1: the string 1
 *@s2: the string 2
 * Return: pointer to a str
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	int i;
	int len = strlen(s1);

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	array = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len - 1; i++)
	{
		*(array + i) = *(s1 + i);
	}
	strcat(array, s2);
	return (array);
}
