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
	dlistint_t *node_nxt, *temp, *temp_1;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp_1 = *head;
		*head = (*head)->next;
		free(temp_1);
	}

	temp = *head;
	while (k < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		k++;
	}

	node_nxt = temp->next;
	temp->next = node_nxt->next;
	node_nxt->next->prev = temp;
	free(node_nxt);

	return (1);
}
