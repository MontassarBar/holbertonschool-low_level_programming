#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
/**
*array_iterator - executes a function given as a parameter
*@array: pointer
*@size: size of array
*@action: pointer
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (action != NULL)
{
unsigned int x;
for (x = 0; x < size; x++)
action(array[x]);
}
}
