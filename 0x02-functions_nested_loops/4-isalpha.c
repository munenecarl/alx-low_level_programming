#include <stdio.h>

/**
 *  _isalpha - checks whether a character is an alphabet
 *
 *  @c: store the character to check whether it is an alphabet
 *
 *  Return:     1 if c is a letter
 *
*/
char _isalpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
