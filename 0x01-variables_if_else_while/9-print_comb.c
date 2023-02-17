#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Definition - program to print all possible combinations of single-digit numbers
 *
 * Return: 0 (success)
*/

int main (void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(c + 48);

		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}

		c++;
	}
	putchar('\n');

	return (0);
}
