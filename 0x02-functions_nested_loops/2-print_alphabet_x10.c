#include "main.h"
/**
*
*
*
**/
void print_alphabet_x10(void)
{
int a = 0;
int b;
while (a < 10)
{
b = 'a';
while(b < 'z')
{
_putchar(b);
b++;
}
_putchar('\n');
a++;
}
return;
}
