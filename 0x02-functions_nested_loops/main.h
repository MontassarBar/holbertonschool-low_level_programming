#ifndef main_h
#define main_h
#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}
#endif
