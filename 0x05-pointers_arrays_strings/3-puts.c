#include "main.h"
/**
 *  _puts - prints string
 *  @str: input string
 *  Return: 0
 */
void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
	_putchar(c[m]);
	}
	_putchar('\n');
}

