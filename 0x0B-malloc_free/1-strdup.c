#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
**_strdup -  a copy of the string given as a parameter.
*@str: string
*Return: NULL or y
**/
char *_strdup(char *str)
{
int x, i, a;
char *y;
a = 0;
x = strlen(str);
y = malloc(sizeof(*y) * (x + 1));
if (y == NULL)
return (NULL);
if (str == NULL)
return (NULL);
else
{
for (i = 0; i < x; i++)
{
y[a] = str[i];
a++;
}
return (y);
}
}
