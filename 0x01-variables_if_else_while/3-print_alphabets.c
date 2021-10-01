#include <stdio.h>
/**
*main - prints the alphabet in lowercase, and then in uppercase.
*putchar 3 character
*Return: 0
**/
int main(void)
{
int a = 'a';
int A = 'A';
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
for (A = 'A'; A <= 'Z'; A++)
{
putchar(A);
}
putchar('\n');
return (0);
}
