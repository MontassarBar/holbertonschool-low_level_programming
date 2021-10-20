#include "main.h"
#include <string.h>
/**
**_strstr - locates a substring
*loop
*@haystack: pointer;
*@needle: pointer
*Return: h or Null
**/
char *_strstr(char *haystack, char *needle)
{
int x, y, z, u;
z = strlen(haystack);
u = strlen(needle);
for (x = 0; x < u; x++)
{
for (y = 0; y < z; y++)
{
if (x >= 0 && x <= u)
{
if (needle[x] == haystack[y])
return (haystack + y);
}
}
}
return (NULL);
}
