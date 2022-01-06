#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dlistint - frees a list.
 *@head: pointer
 */
void free_dlistint(dlistint_t *head)
{
if (head == NULL)
return;
while (head != NULL)
{
free(head);
head = head->next;
}
}
