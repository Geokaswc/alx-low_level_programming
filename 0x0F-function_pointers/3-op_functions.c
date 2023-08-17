#include "3-calc.h"

/**
 * op_add - returns the sum of  two nos.
 * @a: first nos.
 * @b: second nos.
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the different between two nos.
 * @a: first no.
 * @b: second no.
 *
 * Return: difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two nos.
 * @a: first no.
 * @b: second no.
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two n0s.
 * @a: first no.
 * @b: second no.
 *
 * Return: division of a and b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of two nos.
 * @a: first no.
 * @b: second no.
 *
 * Return: remainder of the division of a and b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
