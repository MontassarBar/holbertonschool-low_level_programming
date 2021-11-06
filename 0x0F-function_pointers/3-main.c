#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
*main - the oeration
*@argc: the number of arguments
*@argv: the arguments
*Return: z
**/
int main(int argc, char *argv[])
{
int x, y, z;
char *oper;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
x = atoi(argv[1]);
y = atoi(argv[3]);
oper = argv[2];
if (oper[0] != '+' && oper[0] != '-' &&
oper[0] != '*' && oper[0] != '/' && oper[0] != '%')
{
printf("Error\n");
exit(99);
}
if ((oper[0] == '/' || oper[0] == '%') && y == 0)
{
printf("Error\n");
exit(100);
}
z = get_op_func(oper)(x, y);
printf("%d\n", z);
return (0);
}
