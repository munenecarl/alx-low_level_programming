#include "main.h"

/**
 * _strspn - finds the length of a prefix substring
 *
 * @s: the initial segment
 * @accept: bytes to accept from
 *
 * Return:  no of bytes in the initial segment of s from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{	
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					counter = counter + 1;
				}

			}
		}
	}

	return (counter);
}
