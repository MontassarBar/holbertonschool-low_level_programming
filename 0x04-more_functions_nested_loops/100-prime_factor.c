#include <stdio.h>
/**
*
*
*
**/
int main(void)
{
long int a; 
long int n = 612852475143;
for (a = 2; a <= n; a++)
{
if((n % a) == 0)
{
n = n / a;
if(n == 1)
{
printf("%ld", a);
}
}
}
printf("\n");
return (0);
}
