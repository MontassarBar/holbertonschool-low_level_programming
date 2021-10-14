#include "main.h"
#include <string.h>
/**
**_strncpy -  copies a string
*loop
*@dest: pointer
*@src: pointer
*@n: var
*Return: dest
**/
char *_strncpy(char *dest, char *src, int n)
{
int x, y;
y = 0;
for (x = 0; x < n; x++)
{
dest[y] = src[x];
y++;
}
return (dest);
}
