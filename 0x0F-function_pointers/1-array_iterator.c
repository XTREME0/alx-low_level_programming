#include "main.h"
/**
 * array_iterator - executes a function on each element of an array
 *@array: the array
 *@size: size of array
 *@action: pointer to fonction
 * Return: nothing
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
