#include "main.h"

/**
 * _strlen - returns the length of the string
 *
 * @s: the string to be tested
 *
 * Return: length of the string
*/

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
	{
		length++;
	}

	return (length);
}
