#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Destination - program to print the alphabet in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
			putchar(c);
		}
		putchar('\n');
	}
	return (0);
}
