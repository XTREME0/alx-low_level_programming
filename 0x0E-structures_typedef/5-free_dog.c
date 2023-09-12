#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_dog - inicialize struct dog
 *@d: the dog
 * Return: nothing
 *
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
