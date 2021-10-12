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
for (x = 0; x < n; x++)
{
printf("%d, ", a[x]);
}
printf("\n");
}
