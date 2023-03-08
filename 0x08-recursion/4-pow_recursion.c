#include "main.h"

/**
 * _pow_recursion - returns the power of a number
 *
 * @x: number to find the power of
 * @y: number to find the power from
 *
 * Return: -1 if y < 0,
*/

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}



}
