#include "main.h"
/**
 * main - entry point
 *
 * REturn: 0
 */
/**
 * function to print small alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	char alphabet;

	for (i = 1; i <= 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

	_putchar('\n');

	}
}
