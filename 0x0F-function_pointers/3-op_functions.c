#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: the sum or 1 if failed
*/

int op_add(int a, int b)
{
	return a + b;
}

/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: the difference or 1 if failed
*/

int op_sub(int a, int b)
{
	return a - b;
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: the product or 1 if failed
*/

int op_mul(int a, int b)
{
	return a * b;
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: value 
*/

int op_div(int a, int b)
{
	return a / b;
}

/**
 * op_mod - finds the modulo of a number
 * @a: first number
 * @b: second number
 * Return: remainder
*/

int op_mod(int a, int b)
{
	return a % b;
}
