#include "main.h"

/**
 * malloc_checked - Returns a pointer to the allocated memory
 *
 *@b: size
 *Return: Returns a pointer to the allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
	char *array;

	if (b == 0)
	{
		return (NULL);
	}
	array = malloc(b);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	return (array);
}
