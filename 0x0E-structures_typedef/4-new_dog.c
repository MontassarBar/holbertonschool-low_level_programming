#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
*new_dog - creates a new dog
*@name: pointer
*@age: pointer
*@owner: pointer
*Return: dd
**/
char *_strdup(char *str)
{
int x, i, a;
char *y;
a = 0;
if (str != NULL)
{
x = strlen(str);
y = malloc(sizeof(*y) * (x + 1));
if (y == NULL)
return (NULL);
for (i = 0; i < x; i++)
{
y[a] = str[i];
a++;
}
return (y);
}
else
return (NULL);
}
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dd;
dd = malloc(sizeof(dog_t));
if (dd ==  NULL)
return (NULL);
dd->name = _strdup(name);
if (dd->name == NULL)
{
free(dd);
return (NULL);
}
dd->age = age;
dd->owner = _strdup(owner);
if (dd->owner == NULL)
{
free(dd->name);
free(dd);
return (NULL);
}
return (dd);
}
