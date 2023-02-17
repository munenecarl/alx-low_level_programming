#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Definition program to list 0-10 with only putchar
 *
 * Return: 0 (success)
*/

int main(void)
{
	int c = 0;

	while(c <= 9)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');

	return (0);
}
