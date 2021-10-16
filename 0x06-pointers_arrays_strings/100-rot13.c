#include "main.h"
#include <string.h>
/**
**rot13 - encodes a string using rot13
*loop
*@s: pointer
*Return: s
**/
char *rot13(char *s)
{
int x, y, c;
char a[52] =  {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'
, 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b'
, 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q'
, 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char b[52] =  {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
, 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'n', 'o'
, 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd'
, 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
c = strlen(s);
for (y = 0; y < c; y++)
{
for (x = 0; x < 52; x++)
{
if (s[y] == a[x])
{
s[y] = b[x];
x = 52;
}
}
}
return (s);
}
