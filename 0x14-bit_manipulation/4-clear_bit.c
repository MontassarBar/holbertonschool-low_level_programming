#include "main.h"
#include <stdio.h>
/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *@n: pointer
 *@index: pos
 *Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 32)
return (-1);
*n = ~((~*n) | (1 << index));
return (1);
}
