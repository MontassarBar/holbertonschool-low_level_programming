#include<stdio.h>
/**
*main - "prints sizeof evaluates the size of a variable"
*Return:  0 on success. Error code otherwise
*/
int main(void)
{
printf("Size of char: %d\n", sizeof(char));
printf("Size of int: %d\n", sizeof(int));
printf("size of long int: %d\n", sizeof(long int));
printf("Size of long long int: %d\n", sizeof(long long int));
printf("Size of float: %d\n", sizeof(float));
return (0);
}
