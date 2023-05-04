#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 * @n: number to be checked
 * @m: number to be checked
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 1;
	unsigned int j = 0, count = 0;

	while (j < 64)
	{
		if ((n & i) != (m & i))
			count++;
		i = i << 1;
		j++;
	}
	return (count);
}
