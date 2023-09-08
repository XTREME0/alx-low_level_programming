#include "main.h"

/**
 * _realloc - reallocates memory block
 *
 *@ptr: pointer
 *@old_size: size of first ptr
 *@new_size: size of new allocated memory
 *Return: Returns a pointer to the allocated memory
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (old_size == new_size)
	{
		return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
