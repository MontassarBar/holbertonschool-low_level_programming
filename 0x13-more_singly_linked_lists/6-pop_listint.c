#include "lists.h"
#include <stdlib.h>
/**
 *pop_listint - deletes the head node
 *@head: double pointer
 *Return: data
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *ptr;
ptr = *head;
data = ptr->n;
*head = ptr->next;
free(*head);
return (data);
}
