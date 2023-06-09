#include "hash_tables.h"
/**
 * hash_table_set - adds element to the table
 * @ht: hash table
 * @key: key of the element
 * @value: value of the element
 *
 * Return: an element added to the table
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *temp_v = NULL;
	unsigned long int x = 0;
	hash_node_t *new = NULL, *temp = NULL;

	if (!ht || !ht->array || !value)
		return (0);

	if (strlen(key) == 0 || !key)
		return (0);
	temp_v = strdup(value);
	if (!temp_v)
		return (0);
	x = key_index((unsigned char *)key, ht->size);

	/* checks if a collision exists */
	temp = ht->array[x];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = temp_v;
			temp->value = strdup(value);
			free(temp_v);
			return (1);
		}
		temp = temp->next;
	}

	/* If a collision doesn't exits, insert node */
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	new->value = temp_v;
	new->next = ht->array[x];
	ht->array[x] = new;
	return (1);
}
