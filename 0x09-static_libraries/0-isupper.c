#include "main.h"
/**
 * _isupper - function for checking the upper case letters
 * @c: input to be checked
 * Return: 1 if it is upper case or 0 if not
 */


int _isupper(int c)
{

if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}

}


