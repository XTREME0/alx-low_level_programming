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
	if (d == 0)
		return;
	if (d->name != 0)
		free(d->name);
	if (d->owner != 0)
		free(d->owner);
	free(d);
}
