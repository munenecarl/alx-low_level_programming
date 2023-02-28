#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string to be string
 *
 * Return: void
*/

void print_rev(char *s)
{
	int i, k, length;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	/*while (s[i] != '\0')*/
	/*{*/
		/*length++;*/
		/*i++;*/
	/*}*/

	for (k = length; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');

}
