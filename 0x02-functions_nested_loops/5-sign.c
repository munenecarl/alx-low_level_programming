#include <stdio.h>

/**
 * 5-sign - function that prints the sign of a number
 *
 * Return: 0 (n is zero) or 1 (n greater than 0) or -1 (n less than zero)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return printf ((int) ("+1"));
	}
	else if (n == 0)
	{
		putchar(0 + 48);
		return (0);
	}
	else
	{
		putchar(45 + 0);
		return (-1);
	}
}
