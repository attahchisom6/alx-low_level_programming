#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function to reallocate a new memory to an old one
 * @prtr:lointer to original size of memory
 * @old_size:orginal size of memory
 * @new_size:new size of memory
 *
 * Return:pointer to new size of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int k;
	char *copied_buffer, *reallock;
	if (ptr != NULL)
	{
		copied_buffer = ptr;
	}
	else if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (NULL);
	}

	reallock = malloc(new_size);
	if (reallock == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < new_size || k < old_size; k++)
	{
		reallock[k] = copied_buffer[k];
	}
	free(ptr);
	return (reallock);
}
