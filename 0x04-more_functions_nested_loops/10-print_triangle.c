#include "main.h"
/**
*print_triangle -  prints a triangle
*loops
*@size: var
*Return: none
**/
void print_triangle(int size)
{
int a, b, c;
if (size > 0)
{
for (a = 1; a <= size; a++)
{
for (b = size - a; b > 0; b--)
{
_putchar(' ');
}
for (c = 1; c <= a; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
return;
}
