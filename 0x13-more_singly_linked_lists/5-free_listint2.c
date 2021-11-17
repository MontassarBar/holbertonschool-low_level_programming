#include "lists.h"
#include <stdlib.h>
/**
*free_listint2 - frees a listint_t list
*@head: double pointer
*/
void free_listint2(listint_t **head)
{
if (head == NULL || *head == NULL)
return;
while ((*head)->next != NULL)
{
free(*head);
*head = (*head)->next;
}
free(*head);
*head = NULL;
}
