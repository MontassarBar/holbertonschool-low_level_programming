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
int x, y;
y = strlen(s);
for (x = 0; x < y; x++)
{
if (s[x] >= c)
s++;
}
return (s);
}
