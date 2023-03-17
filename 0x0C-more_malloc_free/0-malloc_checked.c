#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size to be allocated
 *
 * Return: pointer or 98
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);

}
