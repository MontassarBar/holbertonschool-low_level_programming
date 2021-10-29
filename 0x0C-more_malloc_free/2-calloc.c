#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_calloc - allocates memory for an array
*@nmemb: var
*@size: var
*Return: NULL or a
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *a;
if (nmemb == 0 || size == 0)
return (NULL);
a = malloc(nmemb * size);
if (a == NULL)
return (NULL);
else
memset(a, 0, nmemb * size);
return (a);
}
