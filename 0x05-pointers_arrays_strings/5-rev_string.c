#include "main.h"
/**
 * rev_string - reverse the string
 * @s: the pointer points to the string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{

	int i, count;
	int length = 0;
	char *start_c, *end_c, c;

	i = 0;

	while (s[i] != '\0')
	{
		length++;
	}
	count = length;

	start_c = s;
	end_c = s;

	for (i = 0; i < count - 1; i++)
	{
		end_c++;
	}

	for (i = 0; i < count / 2; i++)
	{


		c = *end_c;
		*end_c = *start_c;
		*start_c = c;


		start_c++;
		end_c--;
	}
}
