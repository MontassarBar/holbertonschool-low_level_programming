#include "main.h"
#include <string.h>
/**
**_strncat - concatenates two strings
*loop
*@dest: pointer
*@src: pointer
*@n: var
*Return: dest
**/
char *_strncat(char *dest, char *src, int n)
{
int x, y, z;
y = strlen(src);
z = strlen(dest);
if (n > y)
n = y;
for (x = 0; x < n; x++)
{
dest[z] = src[x];
z++;
}
return (dest);
}
