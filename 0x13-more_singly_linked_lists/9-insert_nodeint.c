#include "lists.h"

/**
 * node_len - function to get the size of a node
 * @h:pointer to first node
 *
 * Return:no elements in the nodw
 */

int node_len(listint_t *h)
{
	int p;

	while (h != NULL)
	{
		h = h->next;
		p++;
	}
	return (p);
}

/**
 * insert_nodeint - function to insert a node at a given position
 * if the losition exiats
 * @head:pointer to a pointer that points to first node
 * @idx:index to insert element
 * @n:integer data to insert at new node
 * Return:pointer to the inserted  node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned k = 0;
	int p;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	p = node_len(*head);
	if (idx > p)
		return (NULL);
	else if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		/*we will now exclude case k = 0*/
		/*i.e we  will start at case k + 1*/
		temp = *head;
		while (k + 1 < idx)
		{
			temp = temp->next;
			k++;
		}
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}