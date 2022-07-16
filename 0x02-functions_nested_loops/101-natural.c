#include <stdio.h>
/**
 * main - to print sum of multiples
 *
 * Return: 0
 */
int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			sum =  sum + i;
		}
		else if ((i % 5) == 0)
		{
			sum = sum + i;
		}

		else if ((i % 3) == 0)
		{
			sum = sum + i;
		}

	}

	printf("%i\n", sum);
return (0);
}

