#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Definition - program that prints '_putchar', followed by a new line
 *
 * Return: 0 (success)
*/

int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < sizeof(word); i++)
	{
		putchar(word[i]);
	}

	putchar('\n');

	return(0);
}
