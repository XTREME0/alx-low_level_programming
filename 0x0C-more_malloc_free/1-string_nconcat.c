#include "main.h"

/**
 * string_nconcat - point to allocated space which contains s1, & n bytes of s2
 *
 *@s1: string 1
 *@s2: string 2
 *@n: size
 *Return: Returns a pointer to the allocated memory
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int i;
	unsigned int j;

	array = malloc(sizeof(s1) + sizeof(s2) + 1);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(array + i) = *(s1 + i);
	}
	for (j = 0; j < n && *(s2 + j) != '\0'; i++, j++)
	{
		*(array + i) = *(s2 + j);
	}
	*(array + i) = '\0';
	return (array);
}
