#include <stdio.h>
#include <stdlib.h>
/**
*
**/
int main(int argc, char *argv[])
{
int add;
int i;
add = 0;
for (i = 1; i < argc; i++)
{
if (((*argv[i]) >= '0') && ((*argv[i]) <= '9'))
add += atoi(argv[i]);
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", add);
return (0);
}
