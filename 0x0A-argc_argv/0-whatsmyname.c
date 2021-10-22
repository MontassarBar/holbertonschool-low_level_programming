#include <stdio.h>
#include <stdlib.h>
/**
*main - prints its name
*@argc: the number of arguments passed to the program
*@argv: An array containing the program command line arguments
*Return: 0
**/
int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);
return (0);



}
