#include "hash_tables.h"
/**
 * hash_table_delete - delete the entire hash table
 * @ht: pointer to hash table
 * Return: the index of the key
 */
void hash_table_delete(hash_table_t *ht)
{
  unsigned long int i;
  hash_node_t *node;
  hash_node_t *node_tmp;

  if (ht == NULL)
{
return;
}
 
  for (i = 0; i < ht->size; i++)
  {
    if (ht->array[i] != NULL)
    {
      node = ht->array[i];
     
      while (node)
      {
        node_tmp = node->next;
        free(node->key);
        free(node->value);
        free(node);  
        node = node_tmp;
      }
    }
  }
 
  free(ht->array);
  free(ht);
}
