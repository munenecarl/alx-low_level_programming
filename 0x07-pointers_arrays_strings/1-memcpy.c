#include "main.h"

/**
 * _memcpy - copies from src to dest
 *
 * @dest: where to copy to
 * @src: where to copy from
 * @n: how many bytes to copy
 *
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}

	return (dest);

}
