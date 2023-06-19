#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 *
 * @c - placeholder for the char
 *
 * Return: 1 if uppercase or 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
