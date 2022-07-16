#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: size of times table
 * Return: 0
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
		{
			for (i = 0; i <= n; i++)
			{
				for (j = 0; j <= n; j++)
				{
						if ((i * j) < 10)
						{
							_putchar((i * j) + '0');
							if (j == n)
								continue;
							_putchar(',');
							_putchar(' ');
							_putchar(' ');
							if ((i * j) < 10 && (i * (j + 1) >= 10))
								continue;
							_putchar(' ');
						}
						else if ((i * j) >= 10 && (i * j) <= 99)
						{

							_putchar(((i * j) / 10) + '0');
							_putchar(((i * j) % 10) + '0');
							if (j == n)
								continue;
							_putchar(',');
							_putchar(' ');
							if ((i * j) <= 99 && (i * (j + 1) > 99))
								continue;
							_putchar(' ');
						}
						else
						{
						_putchar(((i * j) / 100) + '0');
						_putchar((((i * j) % 100) / 10) + '0');
						_putchar(((i * j) % 10) + '0');
						if (j == n)
							continue;
						_putchar(',');
						_putchar(' ');
						}
				}
				_putchar('\n');
			}
		}
}


