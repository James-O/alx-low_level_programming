#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of size @size
 *
 * @size: The size of the hash table
 * Return: pointer to the hash table on success, else, null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htab;

	if (size < 1)
		return (NULL);

	htab = malloc(sizeof(hash_table_t));

	if (htab == NULL)
		return (NULL);

	htab->size = size;
	htab->array = calloc(size, sizeof(hash_node_t *));

	if (htab->array == NULL)
	{
		free(htab);
		return (NULL);
	}

	return (htab);
}
