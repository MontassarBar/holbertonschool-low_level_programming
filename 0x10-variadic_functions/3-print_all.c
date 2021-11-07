#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*prchar - print char
*@x: var
**/
void prchar(va_list x)
{
printf("%c", va_arg(x, int));
}
/**
*print - print int
*@x: var
**/
void print(va_list x)
{
printf("%d", va_arg(x, int));
}
/**
*prfloat - print float
*@x: var
**/
void prfloat(va_list x)
{
printf("%f", va_arg(x, double));
}
/**
*prstr - print string
*@x: var
**/
void prstr(va_list x)
{
char *ptr;
ptr = va_arg(x, char*);
if (ptr == NULL)
ptr = "(nil)";
printf("%s", ptr);
}
/**
*print_all - prints anything
*@format: pointer
**/
void print_all(const char * const format, ...)
{
int q = 0;
int w;
va_list x;
char *seperator = "";
typ types[] = {
{'c', prchar},
{'i', print},
{'f', prfloat},
{'s', prstr},
{0, NULL}
};
va_start(x, format);
while ((format != NULL) && (format[q] != '\0'))
{
w = 0;
while ((types[w].y != format[q]) && (types[w].y != 0))
{
w++;
}
if (types[w].y == format[q])
{
printf("%s", seperator);
types[w].t(x);
seperator = ", ";
}
q++;
}
printf("\n");
va_end(x);
}
