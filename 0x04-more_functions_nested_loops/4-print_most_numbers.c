#include "main.h"

/**
 * print_most_numbers - prints the numbers 0-9 followed by new line
 *
 * Return: void
*/

void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + 48);
		}
		n++;
	}
	_putchar('\n');

}
