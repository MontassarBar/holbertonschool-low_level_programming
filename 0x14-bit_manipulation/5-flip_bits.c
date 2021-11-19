#include "main.h"
#include <stdio.h>
/**
 *flip_bits - flip to get from one number to another
 *@n: num
 *@m: num
 *Return: x
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int x = 0;
n = n ^ m;
while (n > 0)
{
if ((n & 1) == 1)
x++;
n = n >> 1;
}
return (x);
}
