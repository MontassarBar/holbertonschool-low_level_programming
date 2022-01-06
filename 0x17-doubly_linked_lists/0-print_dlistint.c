#include "lists.h"
#include <stdio.h>
/**
 *print_dlistint - prints all the elements of a dlistint_t list
 *@h: pointer to the head node
 *Return: x (num of nodes)
 **/
size_t print_dlistint(const dlistint_t *h)
{
int x = 0;
if (h == NULL)
return (0);
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
x++;
}
return (x);
}
