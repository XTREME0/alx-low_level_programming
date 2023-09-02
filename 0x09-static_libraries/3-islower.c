#include "main.h"
/**
 * _islower - checks if char is lowercase
 *
 *@c: is the character
 * Return: 1 if it is, 0 if it isn't
 *
 */
int _islower(int c)
{
		if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
