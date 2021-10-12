#include <stdio.h>
#include "main.h"
#include <string.h>
/**
*print_array -  prints n elements of an array of integers
*loop
*@a: pointer
*@n: var
**/
void print_array(int *a, int n)
{
int x;
if (n > 0)
{
printf("%d", a[0]);
for (x = 1; x < n; x++)
{
printf(", %d", a[x]);
}
}
printf("\n");
}
