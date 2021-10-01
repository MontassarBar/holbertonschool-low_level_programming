#include <stdio.h>
/**
*main - prints all the numbers of base 16 in lowercase
*putchar 3 character
*Return: 0
**/
int main(void)
{
int a = '0';
int A = 'a';
for (a = '0'; a <= '9'; a++)
{
putchar(a);
}
for (A = 'a'; A <= 'f'; A++)
{
putchar(A);
}
putchar('\n');
return (0);
}
