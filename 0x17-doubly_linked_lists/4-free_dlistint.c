#include "lists.h"

/**
 * free_dlistint - function to free a double a double linked list
 * @head:pointer to the first node
 *
 * Return:void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *last, *tempf, *tempb;

	last = head;
	while (last != NULL)
	{
		tempb = last;
		last = last->prev;
		free(tempb);
	}

	while (head != NULL)
	{
		tempf = head;
		head = head->next;
		free(tempf);
	}
}
