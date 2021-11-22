#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 *create_file - creates a file
 *@filename: the name of the file to create 
 *@text_content: is a NULL terminated string to write to the file
 *Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
int x, y;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (x == -1)
return (-1);
y = write(x, text_content, strlen(text_content));
if (y == -1)
return (-1);
close(x);
}
else 
{
x = open(filename, O_CREAT, 0600);
if (x == -1)
return (-1);
}
return (1);
}
