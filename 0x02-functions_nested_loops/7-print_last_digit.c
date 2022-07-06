#include "main.h"
/**
 * print_last_digit - function for printing last digit
 * @n: number whose abs will be calculated
 * Return: abs of a number
 */
int print_last_digit(int n)
{
int lastdigit;

if (n < 0)
{
lastdigit = (-1 * (n % 10));
_putchar('0' + lastdigit);

return (lastdigit);
}
else
{

lastdigit = (n % 10);
_putchar (lastdigit + '0');
return (lastdigit);
}

}
