#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isnumber - to find out if number is a digit
 *
 * @number: the input to be tested
 *
 * Return: 1 if not number, 0 if number
*/

int isnumber(char number[])
{
	int i, len;

	len = strlen(number);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(number[i]))
		{
			return (1);
		}
		return (0);
	}

}

/**
 * main - entry point of the program
 *
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: 1 if successful or 0 if failure
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i, num1, num2, result;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc - 1; i++)
		{
			if (isnumber(argv[i]) == 0)
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}

	return (0);
}
