#include "main.h"
#include <string.h>
/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 *
 *@n: the number of bytes
 *@src: source memory
 *@dest: the destination
 * Return: the pointer dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	 unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
