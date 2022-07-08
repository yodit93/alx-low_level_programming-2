#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{

int n, i;

for (i = 0; i <= 100; i++)
{
if (i % 3 == 0)
{
_putchar ('F');
_putchar ('I');
_putchar ('Z');
_putchar ('Z');
}
else if (i % 5 == 0)
{
_putchar ('B');
_putchar ('U');
_putchar ('Z');
_putchar ('Z');
}
else if (i % 15 == 0)
{
_putchar ('F');
_putchar ('I');
_putchar ('Z');
_putchar ('Z');
_putchar ('B');
_putchar ('U');
_putchar ('Z');
_putchar ('Z');
}

else
{
_putchar (i + '0');
}

_putchar ('\n');

}
