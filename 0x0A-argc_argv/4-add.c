#include <stdio.h>
#include <stdlib.h>
/**
*main - adds positive numbers
*@argc: the number of arguments passed to the program
*@argv: An array containing the program command line arguments
*Return: 0
**/
int main(int argc, char *argv[])
{
int add;
int i, y;
add = 0;
for (i = 1; i < argc; i++)
{
if (*argv[i] == '0')
y = 5;
else
y = atoi(argv[i]);
if (y > 0)
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
