#include "main.h"

/**
 * print_numbers - prints from 0-9 and prints a new line
 *
 * Return: void
*/

void print_numbers(void)
{
	int n = 1;

	while (n <= 9)
	{
		_putchar(n + 48);
		n++;
	}
	_putchar('\n');

}
