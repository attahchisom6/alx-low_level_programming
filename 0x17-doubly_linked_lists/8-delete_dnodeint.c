#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete a node
 * at position index
 * @head:a double pointer to the first node
 * @index: position of node to be deleted
 * Return:1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, del;
	unsigned int k = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	while (k < index - 1)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		k++;
	}

	if (temp->next != NULL)
	{
		del = temp->next;
		temp->next = del->next;
		del->next->prev = temp;
		free(del);
		return (1);
	}
	else
	{
		free(temp->next);
		temp->next = NULL;
		return (1);
	}
	return (-1);
}
