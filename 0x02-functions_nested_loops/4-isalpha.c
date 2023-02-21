#include <stdio.h>

/**
 * _isalpha - checks for alphabetical character
 *
 * Return: 1 (alphabetic) or 0 (not alphabetic)
*/

char _isalpha(char c)
{
	if ((c >= 65 && c >= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}