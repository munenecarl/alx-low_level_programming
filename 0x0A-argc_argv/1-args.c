#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * @argc: number of arguments passed to main
 * @argc: array of arguments
 *
 * Return: 1 if successful, 0 if failed
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
