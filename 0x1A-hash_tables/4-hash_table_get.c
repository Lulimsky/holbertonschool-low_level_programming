#include "hash_tables.h"
/**
 * hash_table_get - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
  unsigned long int index;
  hash_node_t *node;

  if (ht == NULL || key == NULL || !strlen(key))
  {
    return (0);
  }
 
  index = key_index((const unsigned char*) key, ht->size);
  node = ht->array[index];

  while (node)
{
if (!strcmp(node->key, key))
    {
      return (node->value);
    }

node = node->next;
}

return (NULL);
}
