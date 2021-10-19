#include "main.h"
#include <string.h>
/**
**_strchr - locates a character in a string
*loop
*@s: pointer
*@c: var
*Return: s
**/
char *_strchr(char *s, char c)
{
int x, y, a, j, i;
char ch[100];
y = strlen(s);
i = 0;
for (x = 0; x < y; x++)
{
if (s[x] == c)
{
a = x;
x = y;
}
}
if (x == (y + 1))
{
for (j = a; j < y; j++)
{
ch[i] = s[j];
i++;
}
s = ch;
return (s);
}
else
return (NULL);
}
