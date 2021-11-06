#include <stdio.h>
#include "3-calc.h"
/**
*get_op_func - selects the correct function to perform the operation
*@s: pointer
*Return: ops[i].f
**/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
if ((s[0] != '+' && s[0] != '-' && s[0] != '*' && s[0] != '/' && s[0] != '%') 
|| s == NULL)
return (NULL);
while (ops[i].op[0] != s[0] && ops[i].op != NULL)
i++;
return (ops[i].f);
}
