#include "main.h"
/**
 * function for checking the alphabet
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{

	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

