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
char *h = haystack;
char *n = needle;
while (h != n)
{
h++;
}
if (h == n)
return (h);
else
return NULL;






}
