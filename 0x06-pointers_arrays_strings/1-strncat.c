#include "main.h"
/**
 * *_strncat - concatenates two string with options
 * @dest: pointer points to the first string
 * @src: pointer points to the second string
 * @n: number of characters to be concatinated to the first string
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
