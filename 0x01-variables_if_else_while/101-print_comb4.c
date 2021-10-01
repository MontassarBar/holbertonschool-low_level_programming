#include <stdio.h>
/**
*main - prints all possible different combinations of three digits
*loop
*Return: 0
**/
int main(void)
{
int a;
int b;
int c;
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9' ; b++)
{
for (c = b + 1; c <= '9'; c++)
{
if (a < b && b < c)
{
putchar(a);
putchar(b);
putchar(c);
if (a + b + c < '7' + '8' + '9')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
