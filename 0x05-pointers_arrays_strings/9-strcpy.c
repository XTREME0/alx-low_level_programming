#include "main.h"
/**
 * _strcpy - basically strcpy
 *
 *@dest: is the destination
 *@src: is the source
 * Return: nothing
 *
 */
void _strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
