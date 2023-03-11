#include <stdio.h>

/**
 * main - entry point of the program
 *
 * @argc: number of arguments
 * @argv: array with the elements passed
 *
 * Return: 1 if success, 0 if failure
*/

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
