#include "main.h"
/**
 * _strncat - basically strncat
 *
 *@dest: is the destination
 *@src: is the source
 *@n: number
 * Return: pointer to dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = strlen(dest) + 1;

	while (src[i] != '\0' && i < n)
	{
		dest[x + i] = src[i];
		i++;
	}
	dest[x + i] = '\0';
	return (dest);
}
