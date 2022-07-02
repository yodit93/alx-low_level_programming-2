#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 Always
 */
int main(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		if (lower_case == 'e' || lower_case == 'q')
		{
			continue;
		}

		putchar(lower_case);
	}
	putchar('\n');
return (0);
}

