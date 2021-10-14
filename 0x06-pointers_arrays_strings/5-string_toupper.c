#include "main.h"
#include <string.h>
/**
**string_toupper - changes all lowercase letters of a string to uppercase
*loop
*@s: pointr
*Return: s
**/
char *string_toupper(char *s)
{
int x, y;
y = strlen(s);
for (x = 0; x < y; x++)
{
if ((s[x] >= 'a') && (s[x] <= 'z'))
s[x] = s[x] - 32;
}
return (s);
}
