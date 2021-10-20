#include <stdio.h>
#include "main.h"
#include <string.h>
/**
*
*
*
*
*
**/
void print_diagsums(int *a, int size)
{
int x, y, z, b;
z = 0;
size = sizeof(a);
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
b = a[x][y];
if ((x == y) || (x + y) == (size - 1))
{
z = z + b;
}
}
}
printf("%d", z);



}
