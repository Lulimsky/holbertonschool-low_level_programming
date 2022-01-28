/**
 * hash_table_set - adds an element to a hash table
 *
 * Return: Always EXIT_SUCCESS.
 */

#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
  unsigned long int index;
  hash_node_t *node;

  if (ht == NULL || key == NULL || value == NULL || !strlen(key) || !strlen(value))
  {
    return (0);
  }

  index = key_index((const unsigned char*) key, ht->size);
  node = ht->array[index];

  while (node)
{
if (!strcmp(node->key, key))
    {
      /* Update node */
      free(node->value);
      node->value = strdup(value);

      if (node->value == NULL)
      {
        return (0);
      }

      return (1);
    }

node = node->next;
}

  /* Append new node */
  node = ht->array[index];
ht->array[index] = malloc(sizeof(hash_node_t));

  if (ht->array[index] == NULL)
return (0);

  ht->array[index]->key = strdup(key);

  if (ht->array[index]->key == NULL)
{
free(ht->array[index]);
return (0);
}

  ht->array[index]->value = strdup(value);

  if (ht->array[index]->value == NULL)
{
free(ht->array[index]);
return (0);
}

  ht->array[index]->next = node;

  return (1);
}
