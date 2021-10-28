#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*
*
*
*
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
a[x] = malloc(sizeof(a) * width);
if (a[x] == NULL)
return(NULL);
}
if (a[x] == NULL)
free(a[x]);
if (a == NULL)
free (a);
return (a);
}
