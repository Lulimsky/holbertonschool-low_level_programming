#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 *@ht: pointer to the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
  unsigned long int i;
  hash_node_t *node;
  int flag = 0;

  if (ht == NULL)
{
return;
}
 
  printf("{");
 
  for (i = 0; i < ht->size; i++)
  {
    if (ht->array[i] != NULL)
    {
      node = ht->array[i];
     
      while (node != NULL)
      {
        if (flag)
          printf(", ");

        printf("'%s': '%s'", node->key, node->value);
        flag = 1;
        node = node->next;
      }
    }
  }
 
  printf("}\n");
}
