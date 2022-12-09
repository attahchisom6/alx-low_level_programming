#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at the given index
 * @idx:index
 * @n:integer data to insert at the new node
 *
 * Return:address of new node, on failure return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *end, *begin;
	unsigned int k = 0;
	
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(h);
		return (NULL);
	}
	
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		(*h)->prev = new;
		*h = new;
		
		return (new);
	}

	end = *h;
	while (end != NULL && k < idx)
	{
		if (k == idx - 1)
		{
			new->next = end->next;
			end->next = new;
			new->prev = end;
			if (new != NULL)
				new->next->prev = new;
				
			return(new);
		}
		else
			end = end->next;
		k++;
	}
	return (NULL);
}
