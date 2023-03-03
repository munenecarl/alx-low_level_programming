#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 *
 * @dest: string to be appended to
 * @src: string to append
 *
 * Return: pointer pointing to resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i, k;
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		dest[i] = src[k];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
