#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*add_nodeint_end - adds a new node at the end of a listint_t list
*@head: double pointer
*@n: int
*Return: new
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *end = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (end->next != NULL)
end = end->next;
end->next = new;
return (new);
}
