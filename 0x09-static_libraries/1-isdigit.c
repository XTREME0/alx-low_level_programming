#include "main.h"
/**
 * _isdigit - checks if char is a digit
 *
 *@c: is the character
 * Return: 1 if it is, 0 if it isn't
 *
 */
int _isdigit(int c)
{
		if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
