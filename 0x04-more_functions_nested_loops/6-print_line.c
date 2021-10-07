#include "main.h"
/**
*print_line - draws a straight line in the terminal
*loop
*@n: var
*Return: none
**/
void print_line(int n)
{
int a = '0';
if (n >= '0' && n <= '9')
{
while (a <= n)
{
_putchar('_');
a++;
}
_putchar('\n');
}
return;
}
