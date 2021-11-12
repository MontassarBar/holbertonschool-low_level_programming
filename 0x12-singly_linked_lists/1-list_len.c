#include "lists.h"
#include <stdio.h>
/**
*list_len - returns the number of elements in a linked list_t list
*@h: pointer
*Return: x
**/
size_t list_len(const list_t *h)
{
int x;
if (h == NULL)
return (0);
for (x = 0; h != NULL; x++)
{
h = h->next;
}
return (x);
}
