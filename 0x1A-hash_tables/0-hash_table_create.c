#include "hash_tables.h"

/**
 * hash_table_create - makes a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned long int x;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);
	hash_t->size = size;
	hash_t->array = malloc(size * sizeof(hash_node_t *));
	
	if (hash_t->array == NULL)
	{
		free(hash_t);
		return (NULL);
	}

	for (x = 0; x < size; x++)
		hash_t->array[x] = NULL;
	return (hash_t);
}
