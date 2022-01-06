#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *@head: pointer to the head node
 *@index: the index of the node
 *Return: NULL or head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int x = 0;
if (head == NULL)
return (NULL);
while (x < index && head != NULL)
{
head = head->next;
x++;
}
return (head);
}
