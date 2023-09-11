#ifndef HEADER_H__
#define HEADER_H__
/**
 * struct dog - structure
 *@name: the name
 *@age: the age
 *@owner: the owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
