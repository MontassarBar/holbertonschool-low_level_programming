#include <stdio.h>
/**
*main - prints all possible different combinations of two two-digit numbers
*loop
*Return: 0
**/
int main(void)
{
int a;
int b;
int c;
int d;
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9' ; b++)
{
for (c = '0'; c <= '9'; c++)
{
for (d =  '0'; d <= '9'; d++)
{
if (((b < d) && (a == c)) || (a < c))
{
if (!(d == '1' && c == '0'))
{
putchar(',');
putchar(' ');
}
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
}
}
}
}
}
putchar('\n');
return (0);
}
