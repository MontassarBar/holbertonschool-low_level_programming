#include <stdio.h>
/**
*beforemain - executed before main function
**/
void __attribute__ ((destructor)) beforemain(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
