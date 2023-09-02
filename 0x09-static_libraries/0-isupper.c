#include "main.h"
/**
 * _isupper - checks if char is uppercase
 *
 *@c: is the character
 * Return: 1 if it is, 0 if it isn't
 *
 */
int _isupper(int c)
{
		if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
