#include "main.h"
/**
 * _strncpy - basically strncpy
 *
 *@dest: is the destination
 *@src: is the source
 *@n: number
 * Return: pointer to dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		dest[i] = '\0';
	} else
	{
		while (i < n)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
