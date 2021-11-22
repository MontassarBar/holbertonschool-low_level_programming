#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: pointer to the file
 *@letters: the number of letters it should read and print
 *Return: the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int x = 0, y = 0, u;
char *BUFFER = malloc(sizeof(char *) * letters);
if (BUFFER == NULL)
return (0);
if (filename == NULL)
return (0);
x = open(filename, O_RDWR);
if (x == -1)
return (0);
u = read(x, BUFFER, letters);
if (u == -1)
return (0);
y = write(STDOUT_FILENO, BUFFER, letters);
if (y == -1)
return (0);
close(x);
free(BUFFER);
return (u);
}
