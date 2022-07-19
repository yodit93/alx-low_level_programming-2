#include "main.h"
/**
 * *_strchr - find a character from the string given
 * @s: string
 * @c: character
 * Return: s or null base don condition
 */
char *_strchr(char *s, char c)
{
	unsigned int b = 0, a;

	while (s[b])
		b++;

	for (a = 0; a < b; a++)
	{
		if (s[a] == c)
			s = s + b;
			return (s);
	}
	return ('\0');
}



