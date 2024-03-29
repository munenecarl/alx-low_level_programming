#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - short defines the dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
*/

struct dog
{
	char *name;
	double age;
	char *owner;
} dog;

/**
 * dog_t = Typedef for Struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
