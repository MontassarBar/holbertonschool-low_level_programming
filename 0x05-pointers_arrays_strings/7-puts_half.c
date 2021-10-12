#include "main.h"
#include <string.h>
/**
*puts_half - prints half of a string
*loops
*@str: pointers
**/
void puts_half(char *str)
{
int i, j, x, n;
x = strlen(str);
if (x % 2 == 0)
{
j = strlen(str) / 2;
for (i = j; i < x; i++)
_putchar(str[i]);
}
else if (x % 2 != 0)
{
n = (strlen(str) - 1) / 2;
for (i = n; i < x; i++)
_putchar(str[i]);
}
_putchar('\n');
}
