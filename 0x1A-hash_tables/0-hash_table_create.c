#include <stdio.h>
#include "hash_tables.h"
#include <stdlib.h>
/**
 *hash_table_create -  function that creates a hash table
 *@size: the size of the array
 *Return: hta(the hash_table) or NULL when something went wrong
  */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hta = malloc(sizeof(hash_table_t));
if (hta == NULL)
return (NULL);
hta->size = size;
hta->array = malloc(sizeof(hash_node_t *) * size);
if (hta->array == NULL)
{
free(hta);
return (NULL);
}
return (hta);
}
