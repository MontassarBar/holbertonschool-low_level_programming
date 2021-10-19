#include "main.h"
#include <string.h>
/**
*
*
*
*
*
*
**/
unsigned int _strspn(char *s, char *accept)
{
int x, y, z, a;
unsigned int r;
y = strlen(s);
a = strlen(accept);
r = 0;
for (x = 0; x < y; x++)
{
for (z = 0; z < a; z++)
{
if (s[x] == accept[z])
r++;
}
}
return (r);
}
