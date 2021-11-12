#include "lists.h"
#include <stdlib.h>
/**
*free_list -frees a list_t list
*@head: pointer
**/
void free_list(list_t *head)
{
list_t *freedom;
while (head != NULL)
{
free(head->str);
freedom = head->next;
free(head);
head = freedom;
}
}
