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
	dlistint_t *temp, *temp_1;
	unsigned int k = 0;

	if (*head == NULL || index < 0)
		return (-1);
	
	if (index == 0)
	{
		temp_1 = *head;
		*head = temp_1->next;
		if (temp_1->next != NULL)
			temp_1->next->prev = NULL;
		free(temp_1);
		return (1);
	}

	temp = *head;
	while (k < index)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		k++;
	}

	if (temp == *head)
		*head = temp->next;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
