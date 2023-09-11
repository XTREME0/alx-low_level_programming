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
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", ((d)->name == NULL ? "(nil)" : (d)->name));
	printf("Age: %f\n", (*d).age);
	/*
	printf("Age: %f\n", ((*d).age == 0 ? "(nil)" : (*d).age));
	*/
	printf("Owner: %s\n", ((d)->owner == NULL ? "(nil)" : (d)->owner));
}
