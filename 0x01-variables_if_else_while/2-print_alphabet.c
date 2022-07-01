#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{
char upper_case;
char lower_case;
for (upper_case = "A"; upper_case < "Z"; upper_case++)
{
putchar(upper_case);
}

for (lower_case = "a"; lower_case < "z"; lower_case++)
{
putchar(lower_case);
}

putchar("\n");
return (0);
