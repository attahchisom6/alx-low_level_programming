#include "lists.h"

/**
 * dlistint_size - get size of double linked list
 * @head:pointer to the first node
 *
 * Return:size of DLL
 */

/*size_t dlistint_size(dlistint_t *head)
{
	int size = 0;
	dlistint_t *last;
	
	last = head;
	while (last != NULL)
		last = last->prev;
	while (head != NULL)
	{
		head = head->next;
		size++;
	}
	return (size);
}*/

/**
 * get_nodeint_at_index - function to get a node at a given index
 * @head:pointer to the first node
 * @index:index of each node
 *
 * Return:nth of the DLL linked link
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t k = 0;
	dlistint_t *node;

	node = head;
	if (node == NULL)
	{
		free(head);
		return (NULL);
	}

	else
	{
		while (node != NULL && k < index)
		{
			node = node->next;
			k++;
		}
		return (node);
	}
	return (NULL);
}
