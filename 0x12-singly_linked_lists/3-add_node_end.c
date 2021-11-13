#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*add_node_end - adds a new node at the end of a list_t list
*@head: double pointer
*@str: pointer to string
*Return: new
**/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *end = *head;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->len = strlen(str);
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
