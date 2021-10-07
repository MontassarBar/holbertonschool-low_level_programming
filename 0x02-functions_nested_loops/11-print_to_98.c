#include "main.h"
#include <stdio.h>
/**
*print_to_98 -  prints all natural numbers from n to 98
*loop
*@n: var
*Rresult: none
**/
void print_to_98(int n)
{
while (n <= 97)
{
printf("%d", n);
n++;
if (n < 99)
{
printf(", ");
}
}
while (n >= 98)
{
printf("%d", n);
n--;
if (n > 97)
{
printf(", ");
}
}
printf("\n");
return;
}
