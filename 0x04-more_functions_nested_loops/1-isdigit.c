#include "main.h"
#include <stdio.h>
 /**
  * _isdigit - determines wether a given character is a digit or not
  * @c: given character
  * Return: 1 or 0
  */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}

}

