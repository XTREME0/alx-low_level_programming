#include "main.h"

/**
 * create_array - create an array of chars & iniciate with a char
 *
 *@c: char to iniciate with
 *@size: size of array
 * Return: pointer to array or NULL if size is 0
 *
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (malloc(sizeof(char) * size) == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		*(array + i) = c;
	}
	return (array);
}
