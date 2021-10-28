#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
***alloc_grid - returns a pointer to a 2 dimensional array of integers
*@width: var
*@height: var
*Return: NULL or a
**/
int **alloc_grid(int width, int height)
{
int x;
int **a;
if (width <= 0 || height <= 0)
return (NULL);
a = malloc(sizeof(a) * height);
if (a == NULL)
return(NULL);
for (x = 0; x < height; x++)
{
a[x] = malloc(sizeof(x) * width);
if (a[x] == NULL)
return(NULL);
}
for (x = 0; x < height; x++)
{
if (a[x] == NULL)
free(a[x]);
}
if (a == NULL)
free (a);
return (a);
}
