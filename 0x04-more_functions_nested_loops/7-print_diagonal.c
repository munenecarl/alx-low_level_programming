#include "main.h"

/**
 * print_diagonal - draws a diagonal line in terminal
 *
 * @n : how many times \ is printed
 *
 * Return: void
*/

void print_diagonal(int n)
{
	int lines, spaces;

	if (n > 0)
	{
		for (lines = 0; lines < n; lines++)
		{
			for (spaces = 0; spaces < lines; spaces++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
