#include "main.h"
/**
*factorial - returns the factorial of a given number
*recursion
*@n: pointer
*Return: 1 or -1 or n*fact(n-1)
**/
int factorial(int n)
{
if (n == 0 || n == 0)
return (1);
else if (n < 0)
return (-1);
return (n * factorial(n - 1));
}
