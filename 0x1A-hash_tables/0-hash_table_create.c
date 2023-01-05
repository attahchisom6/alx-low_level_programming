#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: size of the hash table
 *
 * Return:a pointer to the hash table created
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int k = 0;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	while (k < size)
	{
		array[k] = NULL;
		k++;
	}
	table->size = size;
	table->array = array;

	return (table);
}
