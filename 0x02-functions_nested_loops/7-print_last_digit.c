#include "main.h"
/**
* print_last_digit - prints the last digit of a number
*loop
*@a: var
*Return: 4
**/
int print_last_digit(int a)
{
int b;

a = a % 10;
if (a < 0)
a = (-1) * a;
b = a + 48;
_putchar(b);
return (a);
}
