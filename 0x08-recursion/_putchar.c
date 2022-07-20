#include "main.h"
/**
 * _putchar - prints char
 * @c: char to be printed
 * Return: on success 1
 * On error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

