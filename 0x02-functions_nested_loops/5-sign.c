#include "main.h"
/**
 * print_sign - function for checking the sign of a given number
 * @n - a number checked for its sign
 * Return: + if posetive, - if negative and 0 if neither or if it is 0
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
