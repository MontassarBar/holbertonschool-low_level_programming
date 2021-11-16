#include "lists.h"
#include <stdlib.h>
/**
*free_listint - frees a listint_t list
*@head: pointer
**/
void free_listint(listint_t *head)
{
listint_t *freenode = head;
while (head != NULL)
{
freenode = head->next;
free(head);
head = freenode;
}
}