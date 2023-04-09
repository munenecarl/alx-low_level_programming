#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to be checked
 * @index: index of the bit to be checked
 * Return: 1 on success, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
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
	*n = *n | i;
	return (1);
}