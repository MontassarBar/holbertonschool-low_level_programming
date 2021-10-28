#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*string_nconcat - concatenates two strings
*@s1: string1
*@s2: string2
*@n: var
*Return: NULL or a
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int x, y, z, i, v;
char *a;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
x = strlen(s1);
y = strlen(s2);
v = 0;
a = malloc(((x + y) +1) * sizeof(*a));
if (a == NULL)
return (NULL);
for (z = 0; z < x; z++)
{
a[v] = s1[z];
v++;
}
if (n < y)
{
for (i = n; i < y; i++)
{
a[x] = s2[i];
x++;
}
}
else
{
for (i = 0; i < y; i++)
{
a[x] = s2[i];
x++;
}
}
return (a);
}
