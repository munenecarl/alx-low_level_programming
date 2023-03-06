#include "main.h"

/**
 * print_diagsums - prints the sum of the diagonals of a square matrix
 * 
 * @a: array to be printed
 * @size: size of the array
 * 
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int sum, i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			sum = sum + (int *)a[i][j];
		}
		
	}
	
}