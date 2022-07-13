#include <unistd.h>
/**
 * _putchar - prints the sting
 * @c: char to print
 *
 * Return: On successs 1.
 * On error, -1 is returned, and error is there returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

