#include "main.h"

/**
 * _strdup - returns a pointer to a str which is a duplicate of the string str
 *
 *@str: the string
 * Return: pointer to a str which is a duplicate of the string str
 *
 */

char *_strdup(char *str)
{
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	array = (char *)malloc(strlen(str) + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	strcpy(array, str);
	return (array);
}
