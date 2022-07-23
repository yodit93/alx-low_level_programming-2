#include "main.h"
/**
 * _strspn- compares two string and returns the length
 * @s: the first string
 * @accept: the second string
 * Return: the length og similar characters
 */
unsigned int _strspn(char *s, char *accept)
{
	char *str1, *str2;
	int i, j, length;

	length = 0;
	str1 = s;
	str2 = accept;

	i = 0;

	while (str1[i] != '\0')
	{
		j = 0;

		while (str2[j] != '\0')
		{
			if (str1[i] == str2[j])
			{
				length++;
				break;
			}
			j++;
		}

		if (s[i] != accept[j]) /*If aren't equals*/
			break;
		i++;
	}

	return (length);
}

