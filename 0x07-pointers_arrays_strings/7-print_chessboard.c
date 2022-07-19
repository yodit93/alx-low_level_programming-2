#include "main.h"
/**
 * print_chessboard - print chessboard
 * @a: 2d arrays of chars
 *Return: void
 */
void print_chessboard(char (*a)[8])

{

	int i, j;

	i = 0;

	while (i < 8) /*number repetitions*/

	{

		j = 0;

		while (j < 8)

		{

			_putchar (a[i][j]);

			j++;

		}

		_putchar ('\n'); /*print new line*/

		i++; /*add +1*/

	}

}

