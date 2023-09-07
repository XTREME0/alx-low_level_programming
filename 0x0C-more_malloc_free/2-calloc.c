#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 *
 *@nmemb: num of elements
 *@size: size
 *Return: Returns a pointer to the allocated memory
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	array = malloc(nmemb * size);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	return (array);
}
