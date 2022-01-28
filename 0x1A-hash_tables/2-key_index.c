#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 *key_index - function that gives you the index of a key
 *
 * @key: the key
 * @size: the size of the array of the hadh table
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int h = hash_djb2(key);
return (h % size);
}
