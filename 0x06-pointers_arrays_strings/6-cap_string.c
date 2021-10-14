#include "main.h"
#include <string.h>
/**
**cap_string - capitalizes all words of a string
*loop
*@s: pointer
*Return: s
**/
char *cap_string(char *s)
{
int x, y;
y = strlen(s);
for (x = 0; x < y; x++)
{
if (x == 0)
{
if ((s[x] >= 'a') && (s[x] <= 'z'))
s[x] = s[x] - 32;
}
else if (s[x] == ' ' || s[x] == '\t' || (s[x] == '\n') || s[x] == ',' ||
s[x] == ';' || s[x] == '.' || s[x] == '!' || s[x] == '?' || s[x] == '"'
|| s[x] == '(' || s[x] == ')' || s[x] == '{' || s[x] == '}')
{
if ((s[x + 1] >= 'a') && (s[x + 1] <= 'z'))
s[x + 1] = s[x + 1] - 32;
}
}
return (s);
}
