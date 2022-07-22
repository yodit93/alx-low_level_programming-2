#include <stdio.h>
/**
 * main - prints all arguments passed to it
 * @argc: arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv index %d is %s\n", i, argv[i]);
	}
	return (0);
}

