#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Definition - function that prints 10 times the alphabet
 *
 * Return:0 (success)
*/

int main(void)
{
	int counter;
	char c;

	for (counter = 0; counter <= 9; counter++)
	{
		for (c = 97; c <= 122; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}

	return (0);
}