#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * 
 * @array: the array to be iterated over
 * @size: size of the array
 * @cmp: the function that compares
 * 
 * Return: index of the first matching element, -1 if no matches
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);	
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return(i);		
	}
	return (-1);	
}