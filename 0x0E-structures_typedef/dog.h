#ifndef HEADER_H__
#define HEADER_H__
typedef struct dog dog_t;
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
