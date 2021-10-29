#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*array_range - creates an array of integers
*@min: var
*@max: var
*Return: NULL or a
**/
int *array_range(int min, int max)
{
int x, y;
int *a;
y = 0;
if (min > max)
return (NULL);
a = malloc((max - min) * sizeof(*a));
if (a == NULL)
return (NULL);
for (x = min; x < max; x++)
{
a[y] = x;
y++;
}
return (a);
}
