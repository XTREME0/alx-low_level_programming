#include <stdio.h>
/**
 * print_name - print name
 *@name: the name
 *@f: pointer to fonction
 * Return: nothing
 *
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
