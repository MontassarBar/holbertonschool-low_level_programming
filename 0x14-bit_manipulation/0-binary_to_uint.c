#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *binary_to_uint - convert binary numbers to unsigned int
 *@b: pointer
 *Return: the converted num
 */
unsigned int binary_to_uint(const char *b)
{
int x, y = 1, f;
unsigned int z = 0;
if (b == NULL)
return (0);
f = strlen(b);
for (x = f - 1; x >= 0; x--)
{
if (b[x] != '1' && b[x] != '0')
return (0);
if (b[x] == '1')
z += y;
y *= 2;
}
return (z);
}
