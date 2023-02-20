#include <stdio.h>

/**
 * main - Entry point of the the program
 *
 * Description - program to diplay double numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
