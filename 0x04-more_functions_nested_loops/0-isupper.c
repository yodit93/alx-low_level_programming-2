#include "main.h"
#include <stdio.h>

/**
 * _isupper - function for checking the upper case letters
 * @c: input to be checked
 * Return: 1 if it is upper case or 0 if not
 */


int _isupper(int c)

{
char upper;

if ((upper >= 'A') && (upper <= 'Z'))
{
return (1);
}
else
{
return (0);
}

}


