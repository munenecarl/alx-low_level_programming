#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if s1 and s2 are equal, -ve if s1 less than s2, +ve if otherwise
*/

int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while (s1[count] != '\0' && s2[count] != '\0')
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}

	return (0);
}
