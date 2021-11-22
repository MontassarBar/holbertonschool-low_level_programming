#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
int x = 0, y;
if (filename == NULL)
return (0);
x = open(filename, O_WRONLY);
if (x == -1)
return (0);
y = write(x, filename, letters);
if (y == -1)
return (0);
close (x);
x = open(filename, O_RDONLY);
if (x == -1)
return (0);
close (x);
return (letters);
}