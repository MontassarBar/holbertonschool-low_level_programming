#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *@head: double ponter
 *@n: const int
 *Return: NULL or new
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *tail;
if (new == NULL)
return (NULL);
new->n = n;
if (*head == NULL)
{
new->next = NULL;
new->prev = NULL;
*head = new;
}
else
{
tail = *head;
while (tail->next != NULL)
tail = tail->next;
tail->next = new;
new->prev = tail;
new->next = NULL;
}
return (new);
}
