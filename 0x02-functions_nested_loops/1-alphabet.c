#include <stdio.h>

/**
 * print_alphabet - program to print alphabet in lowercase
 *
 * Return: 0 (success)
*/

void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return(0);
}
