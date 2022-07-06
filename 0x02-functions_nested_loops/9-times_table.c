#include "main.h"
/**
 * times_table - 9 times table
 */
void times_table(void)
{
int a, b;

for (a = 0; a <= 9; a++)
{
	for (b = 0; b <= 9; b++)
	{
		return (a * b);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}

}
