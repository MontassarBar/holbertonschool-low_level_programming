#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
**str_concat - concatenates two strings
*@s1: string1
*@s2: string2
*Return: NULL or i
**/
char *str_concat(char *s1, char *s2)
{
int x, y, v, a, p;
char *i;
v = 0;
x = strlen(s1);
y = strlen(s2);
i = malloc(((x + 1) + (y + 1)) * sizeof(*i));
if (i == NULL)
return (NULL);
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (a = 0; a < x; a++)
{
i[v] = s1[a];
v++;
}
for (p = 0; p < y; p++)
{
i[x] = s2[p];
x++;
}
return (i);
}
