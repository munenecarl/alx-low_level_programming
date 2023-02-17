#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description - program to print all numbers from 0 - 9
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
