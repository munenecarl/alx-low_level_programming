#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point of the program
 * 
 * Return: 1 if successful or 0 if failure
*/

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n"); 
	}

	int num1, num2, result;

	if (sscanf(argv[1], "%d", &num1) != 1 || sscanf(argv[2], "%d", &num2 != 1))
	{
		printf("Error\n");
		return (1);
	}

	result = num1 + num2;
	printf("%d\n");

	return (0);
}
