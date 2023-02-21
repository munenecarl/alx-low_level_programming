#include <stdio.h>

/**
 * void times_table - prints the 9 times
 *
 * Return: void
*/

void times_table(void)
{
	int j, k, result;

	for (j = 0; j <= 9; j++)
	{
		for (k = 1; k <= 9; k++){
			result = j * k;
			printf("%d, ", result);
		}
		putchar('\n');
	}

}