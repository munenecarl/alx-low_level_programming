#include "main.h"

/**
 * _strbrk - searches a string for any of a set of bytes
 *
 * @s: string to find occurence in
 * @accept: string to find occurences from
 *
 * Return:  a pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);

}