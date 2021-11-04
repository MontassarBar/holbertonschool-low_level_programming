#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
/**
*
*
*
*
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (action != NULL)
{
long unsigned x;
for (x = 0; x < size; x++)
action(array[x]);
}
}
