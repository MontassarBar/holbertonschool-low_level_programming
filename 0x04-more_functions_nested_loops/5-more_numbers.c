#include "main.h"
/**
*more_numbers - prints 10 times the numbers, from 0 to 14
*loop
*Return: none
**/
void more_numbers(void)
{
int a, b, c;
for (c = 0; c < 10; c++)
{
for (b = '0'; b <= '1'; b++)
{
for (a = '0'; a <= '9'; a++)
{
if ((b == '1') && (a <= '4'))
_putchar(b);
if (((b == '0') && (a <= '9')) || ((b == '1') && (a <= '4')))
_putchar(a);
}
}
_putchar('\n');
}
return;
}
