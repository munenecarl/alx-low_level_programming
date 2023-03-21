#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to the dog
 *
 * Return: void
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
