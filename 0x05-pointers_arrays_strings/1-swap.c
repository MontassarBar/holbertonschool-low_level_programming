#include "main.h"
/**
*swap_int - swaps the values of two integers
*pointerrrrs
*@a: pointer
*@b: pointer
*Return: none
**/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
return;
}
