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
	char c, k;

	for (c = '0'; c <= 'f'; c++)
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
