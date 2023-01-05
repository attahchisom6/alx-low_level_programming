#include "hash_tables.h"

/**
 * _memset - function to fill a memory area with a constant byte
 * @buffer: memory to be filled
 * @b:byte to fill buffer
 * @n: number if byte to fill in buffer
 *
 * Return: pointer to the memory area
 */

char *_memset(char *buffer, char b, unsigned long int n)
{
	unsigned long int k  = 0;

	while (k < n)
	{
		buffer[k] = b;

		k++;
	}
	return (buffer);
}

/**
 * my_calloc - function to allocate a dynamic size to an array
 * @size:size of the array
 * @nmemb:number of elements in the array
 *
 * Return: address of the new array
 */

void *my_calloc(unsigned long int size, unsigned long int nmemb)
{
	unsigned long ssize;
	void *buffer;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ssize = size * nmemb;

	buffer = malloc(ssize);
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}

	return (_memset(buffer, 0, ssize));
}
