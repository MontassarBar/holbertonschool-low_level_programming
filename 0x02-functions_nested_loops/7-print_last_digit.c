#include "main.h"
/**
* print_last_digit - prints the last digit of a number
*loop
*@a: var
*Return: 4
**/
int print_last_digit(int a)
{
if (a < 0)
{
a = (-1) * a;
}
a = a % 10;
a = a + 48;
_putchar(a);
return (4);
}
