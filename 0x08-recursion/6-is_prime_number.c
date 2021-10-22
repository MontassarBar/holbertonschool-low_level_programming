#include "main.h"
/**
*prime - prime number
*recursion
*@i: var
*@n: var
*Return: prime(i+1, n) or 0 or 1
**/
int prime(int i, int n)
{
if ((i < n) && ((n % i) != 0))
return (prime(i + 1, n));
else if ((i < n) && ((n % i) == 0))
return (0);
else
return (1);
}
/**
*is_prime_number - yes no
*recursion
*@n: var
*Return: 0 or prime(2, n)
**/
int is_prime_number(int n)
{
if (n == 1)
return (0);
else if (n <= 0)
return (0);
return (prime(2, n));
}
