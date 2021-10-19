#include "main.h"
#include <string.h>
/**
*_strspn - gets the length of a prefix substring
*loops
*@s: pointer
*@accept: pointer
*Return: r
**/
unsigned int _strspn(char *s, char *accept)
{
int x, y, z, a, r, t;
y = strlen(s);
a = strlen(accept);
r = 0;
t = y / 2;
for (x = 0; x < t; x++)
{
for (z = 0; z < a; z++)
{
if (s[x] == accept[z])
r++;
}
}
return (r);
}
