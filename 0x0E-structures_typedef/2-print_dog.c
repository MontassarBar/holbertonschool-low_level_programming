#include "dog.h"
#include <stdio.h>
/**
*print_dog - prints a struct dog
*@d: pointer
**/
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name);
if (d->name == NULL)
printf("Name: (nil)");
printf("Age: %f\n", d->age);
if (d->age <= 0)
printf("Age: (nil)");
printf("Owner: %s\n", d->owner);
if (d->owner == NULL)
printf("Owner: (nil)");
}
}
