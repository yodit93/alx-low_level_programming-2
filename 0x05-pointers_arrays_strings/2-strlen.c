#include "main.h"
/**
 * _strlen - counts the length of the string given
 * @s: pointer that points to a given string
 * Return: 0
 */
int _strlen(char *s)
{
	int u;

	u = 0;

	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}

