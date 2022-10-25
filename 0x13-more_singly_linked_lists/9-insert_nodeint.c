#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert a node at a given position
 * if the losition exiats
 * @head:pointer to a pointer that points to first node
 * @idx:index to insert element
 * @n:integer data to insert at new node
 * Return:pointer to the inserted  node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int k = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL && idx != 0)
		return (NULL);
	else if (*head == NULL && idx == 0)
		*head = new;
	else if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		/*we will now exclude case k = 0*/
		/*i.e we  will start at case k + 1*/
		temp = *head;
		while (k < idx - 1)
		{
			temp = temp->next;
			k++;
		}
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
