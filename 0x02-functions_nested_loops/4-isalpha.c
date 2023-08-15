#include "main.h"
/**
 * _isalpha - checks if char is a letter
 *
 *@c: is the character
 * Return: 1 if it is, 0 if it isn't
 *
 */
int _isalpha(int c)
{
		if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
