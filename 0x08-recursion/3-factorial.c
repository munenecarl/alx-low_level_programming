#include "main.h"

/**
 * factorial - finds the factorial of a given number
 *
 * @n: number to find factorial of
 *
 * Return: -1 if n < 0, 1 if n = 1
*/

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
