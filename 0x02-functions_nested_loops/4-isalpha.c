#include "main.h"
/**
 * _isalpha - function for checking the alphabet
 * @c - parameter to be checked
 * Return: 1 if the input is letter and 0 if not
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

