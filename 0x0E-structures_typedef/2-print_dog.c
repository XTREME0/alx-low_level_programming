#include "dog.h"
#include <string.h>
#include <stdio.h>

/**
 * print_dog - print struct dog
 *@d: dog struct
 *
 * Return: nothing
 *
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", (d)->name, (*d).age, (d)->owner);
}
