#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*free_dog - frees dogs
*@d: pointer
**/
void free_dog(dog_t *d)
{
free(d->owner);
free(d->age);
free(d->name);
free(d);
}
