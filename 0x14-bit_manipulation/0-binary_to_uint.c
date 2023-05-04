#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: unsigned integer equivalent of the binary value, or 0 on error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int new = 0;
	int size, i;

	if (b == NULL)
		return (0);

	for (size = 0; b[size] != '\0'; size++)
		;
	for (i = 0; i < size; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		new += (unsigned int)(b[i] - '0') << (size - i - 1);
	}
	return (new);
}
