#include "lists.h"
#include <stdio.h>
/**
*print_listint - print nodes
*@h: pointer
*Return: num of nodes (x)
**/
size_t print_listint(const listint_t *h)
{
int x;
if (h == NULL)
return (NULL);
for (x = 0; h != NULL; x++)
{
printf("%d\n", h->n);
h = h->next;

}
return (x);
}
