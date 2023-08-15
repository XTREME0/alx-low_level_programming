#include "main.h"
/**
 * _islower - checks if char is lowercase
 *
 * Return: 1 if it is, 0 if it isn't
 *
 */
int _islower(int c)
{
	if (c < 65 || c > 90)
	{
		return (0);
	}
	return (1);
}
