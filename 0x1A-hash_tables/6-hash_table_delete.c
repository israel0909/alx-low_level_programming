#include "hash_tables.h"
/**
* hash_table_delete - deletes the hash table
* @ht: the hash table
* Return: the hash table deleted
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temporal, *next;
	unsigned long int x;

	if (!ht)
		return;
	for (x = 0; x < ht->size; x++)
		for (temporal = ht->array[x]; temporal; temporal = next)
		{
			next = temporal->next;
			free(temporal->key);
			free(temporal->value);
			free(temporal);
		}
	free(ht->array);
	free(ht);
}
