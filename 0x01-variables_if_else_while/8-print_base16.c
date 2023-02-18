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
	char c;
	char k;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (k = 'a'; k <= 'f'; k++)
		putchar(k);

	return (0);
}
