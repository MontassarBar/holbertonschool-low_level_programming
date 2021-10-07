#include "main.h"
/**
*times_table - prints the 9 times table
*loop
*Result: none
**/
void times_table(void)
{
int a, b, c, d;
int n = 9;
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
c = a * b;
if (c > 9)
{
d = (c / 10) + 48;
c = (c % 10) + 48;
_putchar(d);
_putchar(c);
}
else
{
d = c + 48;
if (b != 0)
_putchar(' ');
_putchar(d);
}
if (!(a <= 9 && b == 9))
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
return;
}
