#include "main.h"
/**
 * _strspn- compares two string and returns the length
 * @s: the first string
 * @accept: the second string
 * Return: the length og similar characters
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, length;

	length = 0;

	for (i = 0; s[i] != '\0'; a++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				length++;
		}
	}
	return (length);
}

