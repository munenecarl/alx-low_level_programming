#include "main.h"

/**
 * print_square - prints a square,followed by a new line
 *
 * @size: size of the square
 *
 * Return: void
*/

void print_square(int size)
{
	int n, i;

	n = 1;

	if (size > 0)
	{
		while (n <= size)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(42);
			}
			_putchar('\n');
			n++;
		}
	}
	else
	{
		_putchar('\n');
	}

}
