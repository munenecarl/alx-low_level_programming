#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: value for the size of the triangle
 *
 * Return: void
*/

void print_triangle(int size)
{
	int lines, spaces, hashtag;

	if (size >= 0)
	{
		for (lines = 0; lines <= size; lines++)
		{
			for (spaces = 0; spaces < size - 1; spaces++)
				_putchar(' ');
			for (hashtag = 0; hashtag < lines; hashtag++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
