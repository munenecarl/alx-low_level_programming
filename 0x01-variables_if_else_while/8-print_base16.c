#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description - program to list all numbers of base16
 *
 * Return: 0 (success)
*/

int main(void)
{
	int c;
	char k;

	for (c = 0; c <= 15; c++)
	{
		if (c == 9)
		{
			for (k = 'a'; k <= 'f'; k++)
				putchar(k);
			break;
		}
		putchar(c);
	}
	putchar('\n');

	return (0);
}
