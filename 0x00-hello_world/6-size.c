#include<stdio.h>
/**
*main - "prints sizeof evaluates the size of a variable"
*Return:  0 on success. Error code otherwise
*/
int main(void)
{
printf("Size of char: %d", sizeof(char));
printf("Size of int: %d", sizeof(int));
printf("size of long int: %d", sizeof(long int));
printf("Size of long long int: %d", sizeof(long long int));
printf("Size of float: %d", sizeof(float));
return (0);
}
