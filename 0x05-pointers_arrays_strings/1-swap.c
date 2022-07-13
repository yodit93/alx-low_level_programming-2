#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps two varibles
 * @a: the 1st var
 * @b: the 2nd var
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;

	*a = *b;
	*b = i;
}

