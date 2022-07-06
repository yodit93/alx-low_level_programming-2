#include "main.h"
/**
 * print_last_digit - function for printing last digit
 * @n: number whose abs will be calculated
 * Return: abs of a number
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;
	_putchar('0' + lastdigit);
	
	return (lastdigit);
}
