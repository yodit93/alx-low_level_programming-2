#include "main.h"
/**
 * *_strchr - find a character from the string given
 * @s: string
 * @c: character
 * Return: s or null base don condition
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (0);
}



