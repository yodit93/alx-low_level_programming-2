#include "main.h"
/**
 * puts2 - print every other character of a given string
 * @str: string given
 * Return: 0
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
_putchar(s[i]);
}
_putchar('\n');
}


