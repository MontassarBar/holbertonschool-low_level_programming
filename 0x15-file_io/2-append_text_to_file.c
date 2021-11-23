#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
*append_text_to_file -  appends text at the end of a file
*@filename: pointer to the file
*@text_content:  pointer to the content of the file
*Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
int x, y;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
x = open(filename, O_WRONLY | O_APPEND);
if (x == -1)
return (-1);
y = write(x, text_content, strlen(text_content));
if (y == -1)
return (-1);
close(x);
}
return (1);
}
