#include <stdio.h>
/**
 * main - entry point 
 *
 * Return: 0
 */
int main(void)
{
int i;

int j;

for (i = 48; i <= 78; i++)
{
for (j = i + 1; j <= 78; j++)
{
putchar(i);
putchar(j);
	
if ((i == 56) && (j == 78))
{
break;
}
putchar(',');
putchar (' ');

}

}

putchar('\n');

return (0);

}


