#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*add_dnodeint - adds a new node at the beginning of a dlistint_t list
*@head: double pointer
*@n: const int
*Return: new
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
new->prev = NULL;
*head = new;
return (new);
}
