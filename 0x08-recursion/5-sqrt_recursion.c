#include "main.h"
int _sqrt(int, int);

/**
 * _sqrt_recursion - recursion sqrt
 * @n: parameter to sqrt
 * Return: sqrt of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - find the sqrt of a number
 * @n: the base num whose sqrt is going to be find
 * @i: iterative
 * Return: sqrt of a number
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (n < square)
		return (-1);
	if (n == square)
		return (i);
	return (_sqrt(n, i + 1));
}

