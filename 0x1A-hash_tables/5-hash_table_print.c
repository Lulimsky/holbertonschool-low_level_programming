#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 *@ht: pointer to the hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
  hash_node_t *node;

  if (ht == NULL)
    return;

  printf("{");

  node = ht->array[0];

  while (node)
{
    printf("'%s', '%s", node->key, node->value);

    if (node->next != NULL)
    {
      printf(",");
    }

node = node->next;
}
 
  printf("}\n");
}
