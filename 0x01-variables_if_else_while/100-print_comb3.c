#include <stdio.h>
/**
*main - prints all possible different combinations of two digits
*loop
*Return: 0
**/
int main(void)
{
int a;
int b;
for (a = '0'; a <= '9'; a++)
{
for (b = a + 1; b <= '9' ; b++)
{
if (a < b)
{
putchar(a);
putchar(b);
if (a + b < '8' + '9')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
