#include "main.h"
/**
 * *_memset - set n byte of s with a constant byte b
 * @s: string
 * @b: constant byte
 * @n: value
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

