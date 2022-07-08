#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of a triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
int i, j, p, d;

if (size > 0)
d = size - 1;
{
for (i = 0; i < size; i++)
{
for (j = d; j <= 0; j--)
{
_putchar(' ');
}
for (p = 0; p <= i; p++)
{
_putchar(35);
}
_putchar('\n');
}
}

else
{
_putchar('\n');
}


}
