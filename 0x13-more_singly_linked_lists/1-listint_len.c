#include "lists.h"
#include <stdio.h>
/**
*listint_len - print num of elements in a linked list
*@h: pointer
*Return: num of elements
**/
size_t listint_len(const listint_t *h)
{
int x;
for (x = 0; h != NULL; x++)
{
h = h->next;
}
return (x);
}
