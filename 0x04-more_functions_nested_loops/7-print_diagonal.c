#include "main.h"
/**
*print_diagonal - draws a diagonal line on the terminal
*loop
*@n: var
*Return: none
**/
void print_diagonal(int n)
{
int a, b;
if (n > 0)
{
for (a = 1; a < n; a++)
{
for (b = 1; b < n ; b++)
{
_putchar(' ');
}
_putchar('\\');
}
}
_putchar('\n');
return;
}
