#include "main.h"
/**
 * reverse_array - reverses array elements
 * @a: array
 * @n: elements of array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int *start_c, *end_c, c;

	start_c = a;
	end_c = a;


	for (i = 0; i < n; i++)
	{
		end_c++;
	}

	for (i = 0; i < n / 2; i++)
	{
		c = *end_c;
		*end_c = *start_c;
		*start_c = c;

		start_c++;
		end_c--;
	}
}

