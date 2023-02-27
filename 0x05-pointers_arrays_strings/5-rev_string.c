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
	int i, k, length;
	char temp;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}

	for (k = 0; k < length / 2; k++)
	{
		temp = s[k];
		s[k] = s[length - k - 1];
		s[length - k - 1] = temp;
	}
	
}