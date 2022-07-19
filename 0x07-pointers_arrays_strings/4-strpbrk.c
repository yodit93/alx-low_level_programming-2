#include "main.h"
/**
 * *_strpbrk - searchs a string
 * @s: This is the C string to be scanned.
 * @accept: character in str1 that matches one of the characters in str2
 * Return: s that matches any character specified in accept
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; *s != '\0')
{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (*s == accept[j])
		{
			return (s);

		}

	}
}
}


