#include "main.h"
/**
 * print_rev - prints the string in reverse
 * @s: pointer points to the string to be reversed
 * Return: 0
 */
void print_rev(char *s)
{
int i;

while (s[i] != '\0')
{
i++;
}
for (i = i - 1; i <= 0; i--)
{
	_putchar(s[i]);
}
_putchar('\n');
}


