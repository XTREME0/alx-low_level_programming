#include "main.h"
#include <string.h>
/**
 * set_string - sets the value of a pointer to a char 
 *
 *@s: the pointer
 *@to: the char
 * Return: nothing
 *
 */
void set_string(char **s, char *to)
{
	*s = (char *)malloc(strlen(to) + 1);

	 strcpy(*s, to);
}
