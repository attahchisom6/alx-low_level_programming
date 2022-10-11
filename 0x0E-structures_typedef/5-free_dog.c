#include "dog.h"
#include <atdio.h>

/**
 * free_dog - function to free all the spaces in heap memory
 * due to malloc allocation
 * @dog_t:atruct variable
 * @d:pointer to struct variable
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
