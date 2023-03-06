#include "main.h"

/**
 * _chessboard - prints the chessboard
 * 
 * @a: array to be printed
 * 
 * Retturn: nothing
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < (int)sizeof(a[i]); j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
	
}