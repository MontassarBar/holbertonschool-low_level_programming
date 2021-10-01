#include <stdio.h>
/**
*main - prints all single digit numbers of base 10 starting from 0
*loop
*Return: 0
**/
int main(void)
{
int a = '0';
for (a = '0'; a <= '9'; a++)
{
putchar(a);
if (a < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
