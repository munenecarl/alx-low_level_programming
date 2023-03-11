#include <stdio.h>

/**
 * main - entry point of the program
 *
 * @argc: number of arguments passed to main
 * @argv: array storing arguments passed to main
 *
 * Return: 1 if successful, 0 if failure
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1, num2;

	if (sscanf(argv[1], "%d", &num1) != 1 || sscanf(argv[2], "%d", &num2 != 1))
	{
		printf("Error\n");
		return (1);
	}

	int result;

	result = num1 * num2;
	printf("%d\n", result);

	return (0);

}
