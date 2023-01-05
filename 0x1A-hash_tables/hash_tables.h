#ifndef HASH_TABLES
#define HASH_TABLES

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 * @key: A fixed string
 * @value:value to be assigned to key
 * @next: a pointer to the next node
 * Description: a singly linked list detailing the items contained in a hash table
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - a hash table structure
 * @size: size of the hash table
 * @array: array of pointers to the first node
 * Description: a hash data holding size of the hash table and a double pointer to the first elements
 * because we want our handling to use a collision collection handling
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/*str_func.c*/
char *_memset(char *buffer, char b, unsigned long int n);
void *my_calloc(unsigned long int size, unsigned long int nmemb);

/*working functions*/
hash_table_t *hash_table_create(unsigned long int size);

#endif
