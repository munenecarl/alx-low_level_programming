#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Definition - program to check for lowercase character
 *
 * Return:0 (not lower) or 1(is lower)
*/

char _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}