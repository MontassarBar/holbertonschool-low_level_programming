#include "main.h"
#include <string.h>
/**
*rev_string - reverses a string
*loop
*@s: pointer
**/
void rev_string(char *s)
{
int i, j, x, b;
char y[1000];
b = 0;
j = strlen(s);
for (i = 1; i <= j; i++)
{
x = j - i;
y[b] = s[x];
b++;
}
strcpy(s, y);
}
