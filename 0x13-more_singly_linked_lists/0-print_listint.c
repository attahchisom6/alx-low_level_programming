#include "lists.h"

/**
 * print_listint - A function to list the elements of an integer struct
 * head:start of node
 *
 * Return:number of elements of the link
 */

size_t print_listint(const listint_t *h)
{
	size_t p;

	if (h == NULL)
		return (1);
	p = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		p++;
	}
	return (p);
}
