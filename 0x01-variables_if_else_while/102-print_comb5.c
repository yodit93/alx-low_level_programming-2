#include <stdio.h>
/**
 * main entry point
 * Return:
 */
int main(void)

{

int i, j;

for (i = 0; i < 100; i++)
{

for (j = i + 1; j < 100; j++)
{
putchar (i / 10 + '0');
putchar (i % 10 + '0');
putchar (' ');

putchar (second_nums / 10 + '0');
putchar (second_nums % 10 + '0');
if ((i == 98) && (j == 99))
break;

putchar(',');
putchar(' ');

}

}

putchar('\n');

return (0);

}
