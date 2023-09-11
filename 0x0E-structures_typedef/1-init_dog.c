#include "dog.h"
#include <string.h>

/**
 * init_dog - inicialize struct dog
 *@d: dog struct
 *@age: the age
 *@name: the name
 *@owner: the owner
 *
 * Return: nothing
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(d)->name = name;
	(*d).age = age;
	(d)->owner = owner;
}
