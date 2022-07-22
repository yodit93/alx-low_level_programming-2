#include <stdio.h>
/**
 * main - prints the number of argument passeed
 * @argc: arguments passed
 * @argv: array of arguments listed
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

