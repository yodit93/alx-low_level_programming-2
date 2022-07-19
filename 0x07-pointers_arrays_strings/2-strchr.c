#include "main.h"
/**
 * *_strchr - find a character from the string given
 * @s: string
 * @c: character
 * Return: s or null base don condition
 */
char *_strchr(char *s, char c)
{
	unsigned int a = 0, b;

	while (s[a])
		a++;

	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s = s + a;
			return (s);
	}
	return ('\0');
}



