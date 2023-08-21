#include "main.h"
/**
 * puts2 - prints every other char of a string
 *
 *@s: is the string
 *
 * Return: nothing
 *
 */
void puts2(char *s)
{
	int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			printf("%c", *(s + i));
		}
	}
	printf("\n");
}
