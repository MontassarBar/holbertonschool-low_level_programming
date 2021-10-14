#include "main.h"
#include <string.h>
/**
*reverse_array - reverses the content of an array of integers
*loops
*@a: pointer
*@n: pointer
**/
void reverse_array(int *a, int n)
{
int x, c;
int d[100];
c = 0;
for (x = n - 1; x >= 0; x--)
{
d[c] = a[x];
c++;
}
for (x = n - 1; x >= 0; x--)
{
a[x] = d[x];
c++;
}
}
