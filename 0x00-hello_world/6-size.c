#include<stdio.h>
/**
*main - "prints sizeof evaluates the size of a variable"
*Return:  0 on success. Error code otherwise
*/
int main(void)
{int intType;
float floatType;
double doubleType;
char charType;
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of double: %zu bytes\n", sizeof(doubleType));
printf("Size of char: %zu byte\n", sizeof(charType));
return (0);
}

