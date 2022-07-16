#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;
	k = 2;

	for (i = 1; i <= 50; i++)
	{
		printf("%ld", j);
		if (i == 50)
			continue;
		printf(",");
		printf(" ");
		next = j + k;
		j = k;
		k = next;
	}
printf("\n");

return (0);

}

