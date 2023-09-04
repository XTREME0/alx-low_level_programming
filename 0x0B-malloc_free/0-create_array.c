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
	if (size == 0)
		return (NULL);
	char *array = malloc(sizeof(char) * size);
	return (*array);
}
