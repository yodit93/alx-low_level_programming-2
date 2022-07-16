#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int j, k, next;
	unsigned long int even = 0;
	int i;
	
	j = 1;
	k = 2;

	for (i = 1; i < 4000000; i++)
	{
		if ((j % 2) == 0)
		{
			even = even + j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%ld\n", even);
	return (0);
}
