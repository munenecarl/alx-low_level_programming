#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * Return: 1 if successful, 0 if failure
*/

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
	}

	int cents, num_coins;

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins = 0;
	num_coins += cents / 25; cents %= 25;
    	num_coins += cents / 10; cents %= 10;
    	num_coins += cents / 5; cents %= 5;
    	num_coins += cents / 2; cents %= 2;
    	num_coins += cents;
	printf("%d\n", num_coins);

	return (0);

}
