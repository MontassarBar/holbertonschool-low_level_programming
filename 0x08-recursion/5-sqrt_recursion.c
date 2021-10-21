#include "main.h"
/**
*sqrtt - the natural square root of a number
*recursion
*@i: var
*@n: var
*Return: -1 or i or (i+1,n)
**/
int sqrtt(int i, int n)
{
if ((i * i) > n)
return (-1);
else if ((i * i) == n)
return (i);
return (sqrtt(i + 1, n));
}
/**
*_sqrt_recursion - returns the natural square root of a number
 *recursion
 *@n: var
 *Return: n or -1 or sqrtt(2, n)
 **/
int _sqrt_recursion(int n)
{
if (n <= 1 && n > 0)
return (n);
else if (n < 0)
return (-1);
return (sqrtt(2, n));
}
