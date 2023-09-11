#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - inicialize struct dog
 *@age: the age
 *@name: the name
 *@owner: the owner
 *
 * Return: new_dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *shiba;

	shiba = malloc(sizeof(dog_t));
	if (shiba == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	name = malloc(strlen(name) + 1);
	owner = malloc(strlen(owner) + 1);
	(shiba)->name = name;
	(*shiba).age = age;
	(shiba)->owner = owner;
	return (shiba);
}
