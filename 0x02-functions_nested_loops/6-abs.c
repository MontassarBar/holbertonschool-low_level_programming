#include "main.h"
/**
*_abs - computes the absolute value of an integer
*loop
*@a: var
*Return: n
**/
int _abs(int a)
{
if (a < 0)
{
a = a * (-1);
}
else
{
a = a;
}
return (a);
}
