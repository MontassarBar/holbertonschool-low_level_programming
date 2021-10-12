#include "main.h"
#include <string.h>
/**
*
*
*
*
**/
void rev_string(char *s)
{
int i, y, a;
char z[100];
a = strlen(s);
for (i = 0; i < a; i++)
{
y = strlen(s) - i;
z[i] = s[y];
}
strcpy(s, z);
}
