#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_numbers - prints numbers
*@separator: pointer
*@n: var
*
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list y;
int z;
z = 0;
va_start(y, n);
for (x = 0; x < n; x++)
{
z = va_arg(y, int);
if (separator == NULL)
printf("%d", z);
else
{
printf("%d", z);
if (x != (n - 1))
printf("%s", separator);
}
}
va_end(y);
printf("\n");
}
