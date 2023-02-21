#include <stdio.h>

/**
 * main - Entry point of the program
 * 
 * Definition - program to print alphabet in lowercase
 * 
 * Return: 0 (success)
*/

int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return(0);
}
