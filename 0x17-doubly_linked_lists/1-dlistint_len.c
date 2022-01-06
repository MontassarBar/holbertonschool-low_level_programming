#include "lists.h"
#include <stdio.h>
/**
 *dlistint_len - returns the number of elements in a linked dlistint_t list
 *@h: pointer to the head node
 *Return: x
 **/
size_t dlistint_len(const dlistint_t *h)
{
int x = 0;
if (h == NULL)
return (0);
while (h != NULL)
{
x++;
h = h->next;
}
return (x);
}
