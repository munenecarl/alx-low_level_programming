#include <stdio.h>

/**
  * print_alphabet_x10 - defines the prototype in mains.h
  *
  * Description - prints alphabet 10 times
  *
  * Return: void
*/

void print_alphabet_x10(void)
{
	int counter;
	char c;

	for (counter = 0; counter <= 9; counter++)
	{
		for (c = 97; c <= 122; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
