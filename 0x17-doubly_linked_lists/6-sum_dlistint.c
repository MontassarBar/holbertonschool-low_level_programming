#include "lists.h"
#include <stdio.h>
/**
*sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
*@head: pointer to the head node
*Return: x
**/
int sum_dlistint(dlistint_t *head)
{
int x = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
x += head->n;
head = head->next;
}
return (x);
}
