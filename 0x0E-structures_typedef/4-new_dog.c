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
	shiba->owner = malloc(sizeof(owner));
	if (shiba->owner == 0)
	{
		free(shiba->owner);
		free(shiba);
		return (NULL);
	}
	shiba->name = malloc(sizeof(name));
	if (shiba->name == 0)
	{
		free(shiba->name);
		free(shiba->owner);
		free(shiba);
		return (NULL);
	}
	(shiba)->name = name;
	(*shiba).age = age;
	(shiba)->owner = owner;
	return (shiba);
}
