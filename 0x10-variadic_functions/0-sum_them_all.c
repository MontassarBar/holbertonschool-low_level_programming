#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all - returns the sum of all its parameters
*@n: var
*Return: z
**/
int sum_them_all(const unsigned int n, ...)
{
unsigned int x;
int z;
va_list y;
if (n == 0)
return (0);
z = 0;
va_start(y, n);
for (x = 0; x < n; x++)
z += va_arg(y, int);
va_end(y);
return (z);
}
