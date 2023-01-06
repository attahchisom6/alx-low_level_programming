#include "hash_tables.h"

/**
 * hash_table_set - This function serves to add a key and value to the table
 * @ht:pointe ht table
 * @key:string identifier
 * @value:string to be asssociated with key
 * 
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index, size, k = 0;

	if (ht == NULL || key == NULL || *key == '\0' || value != NULL)
		return (0);

	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	while (k == index && ht->array[k] != NULL)
	{
		if (strcmp(ht->array[k]->key, key) == 0)
		{
			free(ht->array[k]->value);
			ht->array[k]->value = strdup(value);
			return (1);
		}
		k++;
	}


	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);

	new->next = ht->array[k];
	ht->array[k] = new;

	return (1);
}
