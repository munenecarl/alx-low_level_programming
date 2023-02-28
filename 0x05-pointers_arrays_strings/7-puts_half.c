#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str: string to be output
 *
 * Return: void
*/

void puts_half(char *str)
{
	int i, k;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	/*while (str[i] != '\0')*/
	/*{*/
		/*length++;*/
		/*i++;*/
	/*}*/

	if (i % 2 == 0)
	{
		for (k = i / 2; k < i - 1; k++)
		{
			_putchar(str[k]);
		}
	}
	else
	{
		for (k = ((i + 1) / 2); k < i; k++)
		{
			_putchar(str[k]);
		}

	}


}
