#include "lists.h"

/**
 * free_listint2 - function to free a link
 * @head:pointer to a pointer to first node
 *
 * Return:void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
