#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
int c;
int length, n, i;

length = 0;

while (str[i] != '\0')
{
length++;
}

for (i = 0; i < length; i++)
{
if (length % 2 == 0)
{
n = length / 2;
}

else
{
n = (length - 1) / 2;
}

for (c = n; c < length; c++)
{
_putchar(str[c]);
}
}
}

