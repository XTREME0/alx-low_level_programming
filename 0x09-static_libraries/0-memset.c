#include "main.h"
#include <string.h>
/**
 * _memset - fills first n bytes of memory with a const
 *
 *@n: the number of bytes
 *@s: pointer to the memory
 *@b: the constant byte
 * Return: the pointer s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	 unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
