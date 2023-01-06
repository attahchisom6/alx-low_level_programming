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
	unsigned long int index, size, k;
	char *dup;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	dup = strdup(value);
	if (dup == NULL)
		return (0);
	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	for (k = index; ht->array[k] != NULL; k++)
	{
		if (strcmp(ht->array[k]->key, key) == 0)
		{
			free(ht->array[k]->value);
			ht->array[k]->value = dup;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(dup);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = dup;

	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
