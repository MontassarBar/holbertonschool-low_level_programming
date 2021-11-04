#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_strings - prints strings
*@separator: pointer
*@n: var
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list y;
char *z;
va_start(y, n);
for (x = 0; x < n; x++)
{
z = va_arg(y, char*);
if (z == NULL)
{
printf("(nil)");
break;
}
if (separator == NULL)
printf("%s", z);
else if (z != NULL)
{
printf("%s", z);
if (x != (n - 1))
printf("%s", separator);
}
}
va_end(y);
printf("\n");
}
