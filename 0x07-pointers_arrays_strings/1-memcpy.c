#include "main.h"
/**
 * *_memcpy - copy memory
 * @dest: pointer for destination
 * @src: pointer for source
 * @n: value
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
		return (dest);
}

