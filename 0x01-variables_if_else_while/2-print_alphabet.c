#include <stdio.h>



/**
 * main - Entry point of the program
 *
 * Description - displays all lowercase alphabet characters
 *
 * Return: 0 (success)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		puthchar (c);
		if (c == 'z')
			putchar('\n');
	}
	return (0);
}