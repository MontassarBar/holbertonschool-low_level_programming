#include "main.h"
#include <string.h>
/**
*print_chessboard - prints the chessboard
*loops
*@a: pointer
**/
void print_chessboard(char (*a)[8])
{
int x, y, z;
char c;
z = sizeof(a);
for (x = 0; x < z; x++)
{
for (y = 0; y < 8; y++)
{
c = a[x][y];
_putchar(c);
}
_putchar('\n');
}
}
