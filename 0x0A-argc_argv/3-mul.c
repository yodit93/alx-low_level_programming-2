#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the multiplication result of two numbers
 * @argc: arguments pasedd
 * @argv: array of arguments
 * Return: 1 or result of multiplication based on condition
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}


