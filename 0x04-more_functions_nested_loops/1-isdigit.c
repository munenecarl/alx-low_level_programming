#include <stdio.h>

/**
 * _isdigit - checks for a digit
 *
 * @c - placeholder for the test variable
 *
 * Return: 1 if digit or 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
