#include <stdio.h>

/**
  * print_to_98 - prints natural numbers
  *
  * @n: stores the number less than 98
  *
  * Return: Nothing
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}
		printf("\n");
	}
	else
	{
		printf("%d", n);
		printf("\n");
	}
}
