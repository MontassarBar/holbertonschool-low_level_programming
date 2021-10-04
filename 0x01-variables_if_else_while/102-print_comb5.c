#include <stdio.h>
/**
 * main - Prints "hii"
 *
 * Return: hi
 */
int main(void)
{
int x, y, z, r;
for (x = '0'; x <= '9'; x++)
{
for (y = '0'; y <= '9'; y++)
{
for (z = '0'; z <= '9'; z++)
{
for (r = '0'; r <= '9'; r++)
{
if ((x < z) || ((x == z) && (y < r)))
{
if (!(r == '1' && z == '0'))
{
putchar(',');
putchar(' ');
}
putchar(x);
putchar(y);
putchar(' ');
putchar(z);
putchar(r);
}
}
}
}
}
putchar('\n');
return (0);
}
