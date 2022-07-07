#include "main.h"
/**
 * print_line - prints line
 * @n: the number of times the character - will be printed
 * Return: 0 Always
 */
void print_line(int n)
{


int i;

if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar(95); 
}

_putchar('\n'); 
}

else
{
_putchar('\n');
}

}

