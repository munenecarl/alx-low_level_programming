#include "main.h"

/**
 * _strchr - locates a charcter in a string
 *
 * @c: character to be searched
 * @s: string to search in
 *
 * Return: returns pointer to the first occurence of c or null
*/

char *_strchr(char *s, char c)
{
	int i;

	if (c != '\0')
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == c)
			{
				return (s + i);
			}

		}

	}
	else
	{
		return (s);
	}

	return (0);
}
