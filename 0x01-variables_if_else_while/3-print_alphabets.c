#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description - program to display all alphabetical letters
 *
 * Return: 0 (success)
*/

int main(void)
{
	char c, k;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar (c);
		if (c == 'z')
		{
			for (k = 'A'; k <= 'Z'; k++)
			{
				putchar(k);
			}
		}
	}
	putchar('\n');
	return (0);
}