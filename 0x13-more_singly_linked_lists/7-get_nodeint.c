#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list
 *@head: pointer
 *@index: the nth node
 *Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x;
if (head == NULL)
return (NULL);
for (x = 0; x < index && head != NULL; x++)
{
head = head->next;
}
return (head);
}
