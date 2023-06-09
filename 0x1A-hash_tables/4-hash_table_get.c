#include "hash_tables.h"
/**
* hash_table_get - gets the element at the hash table
* @ht: hash table
* @key: key
* Return: an element
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int x = 0;
	hash_node_t *temp = NULL;

	if (key == NULL)
	{
		return (NULL);
	}

	if (ht)
	{
		x = key_index((const unsigned char *)key, ht->size);
		temp = ht->array[x];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
