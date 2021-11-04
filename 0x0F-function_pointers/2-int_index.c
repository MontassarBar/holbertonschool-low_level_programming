#include "function_pointers.h"
#include <stdio.h>
/**
*int_index - searches for an integer
*@array: pointer
*@size: size of array
*@cmp: pointer
*Return: x
**/
int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (size <= 0)
return (-1);
for (x = 0; x < size; x++)
{
cmp(array[x]);
if (x == (size - 1) && (*cmp)(array[x]) == 0)
return (-1);
if ((*cmp)(array[x]) == 1)
{
break;
}
}
return (x);
}
