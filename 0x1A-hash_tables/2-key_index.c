#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int k;

	if (size == 0 || key == NULL)
		return (0);
	k = hash_djb2(key) % size;

	return (k);
}
