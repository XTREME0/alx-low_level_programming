#include "main.h"
/**
 * _strcat - basically strcat
 *
 *@dest: is the destination
 *@src: is the source
 * Return: pointer to dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n;

	while (src[i] != '\0')
	{
		n = strlen(dest);
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);
}
