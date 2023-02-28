#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: void
*/

void rev_string(char *s)
{
	int i, k;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (k = 0; k < i / 2; k++)
	{
		temp = s[k];
		s[k] = s[i - k - 1];
		s[i - k - 1] = temp;
	}

}