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
	void *array;
	
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	memset(array, 0, nmemb * size);
	return (array);
}
