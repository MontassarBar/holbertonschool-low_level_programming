#include "main.h"
#include <string.h>
/**
**leet - encodes a string into 1337
*loops
*@s: pointer
*Return: s
**/
char *leet(char *s)
{
int x, y, c;
char a[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char b[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
c = strlen(s);
for (y = 0; y < 10; y++)
{
for (x = 0; x < c; x++)
{
if (s[x] == a[y])
s[x] = b[y];
}
}
return (s);
}
