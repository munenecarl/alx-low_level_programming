#include "main.h"


/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be checked
 * @index: index of the bit to be checked
 * Return: value of the bit at index, or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned int j = 0;

	if (index > 63)
		return (-1);
	while (j < index)
	{
		i = i << 1;
		j++;
	}
	if (n & i)
		return (1);
	else
		return (0);
}
