#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
**create_array - creates an array of char
*@size: size of array
*@c: char
*Return: b or NULL
**/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *b;
b = malloc(sizeof(b) * size);
if  (b == NULL)
{
return (NULL);
}
if (size != 0)
{
for (i = 0; i <= size; i++)
{
b[i] = c;
}
return (b);
}
else
return (NULL);
}
