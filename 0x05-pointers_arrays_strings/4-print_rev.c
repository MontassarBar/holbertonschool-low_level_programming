#include "main.h"
#include <string.h>
/**
*print_rev - prints a string, in reverse
*pointerrrrrrrrs
*@s: pointer
*Return: none
**/
void print_rev(char *s)
{
int a, b, c;
a = 0;
c = strlen(s);
while (a < c)
{
a++;
b = strlen(s) - a;
_putchar(s[b]);
}
_putchar('\n');
return;
}
