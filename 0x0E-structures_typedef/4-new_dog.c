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
dog_t *new_dog(char *name, float age, char *owner)
{
char *namecopy;
char *ownercopy;
dog_t *dd;
namecopy = strdup(name);
ownercopy = strdup(owner);
dd = malloc(sizeof(dog_t));
if (dd ==  NULL)
return (NULL);
dd->name = malloc(sizeof(*name));
if (dd->name == NULL)
return (NULL);
dd->name = namecopy;
dd->age = age;
dd->owner = malloc(sizeof(*owner));
if (dd->owner == NULL)
return (NULL);
dd->owner = ownercopy;
return (dd);
}
