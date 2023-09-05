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

	if (malloc(sizeof(str)) == NULL)
	{
		return (NULL);
	}
	strcpy(array, str);
	return (array);
}
