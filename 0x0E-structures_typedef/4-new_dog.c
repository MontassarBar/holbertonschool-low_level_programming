#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*new_dog - creates a new dog
*@name: pointer
*@age: pointer
*@owner: pointer
*Return: dd
**/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dd;
dd = malloc(sizeof(dog_t));
if (dd ==  NULL)
return (NULL);
dd->name = malloc(sizeof(*name));
if (dd->name == NULL)
return (NULL);
dd->name = name;
dd->age = age;
dd->owner = malloc(sizeof(*owner));
if (dd->owner == NULL)
return (NULL);
dd->owner = owner;
return (dd);
}
