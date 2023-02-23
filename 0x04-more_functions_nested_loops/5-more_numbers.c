#include "main.h"

/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: void
*/

void more_numbers(void)
{
	int counter, n;

	for (counter = 1; counter <= 10; counter++)
	{
		for (n = 1; n <= 14; n++)
		{
			if (n > 9)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}

}
