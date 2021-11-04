#include <stdio.h>
#include "function_pointers.h"
/**
*print_name - prints a name
*@name: pointer
*@f: pointer
**/
void print_name(char *name, void (*f)(char *))
{
void (*ptr)(char *);
ptr = f;
ptr(name);
}
