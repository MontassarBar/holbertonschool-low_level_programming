#include <stdio.h>
/**
*main - prints the alphabet in lowercase except q and e
*loop
*Return: 0
**/
int main(void)
{
int a = 'a';
for (a = 'a'; a <= 'z'; a++)
{
if (a != 'q' && a != 'e')
putchar(a);
}
putchar('\n');
return (0);
}
